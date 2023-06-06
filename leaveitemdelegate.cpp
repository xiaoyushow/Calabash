#include "leaveitemdelegate.h"
#include "leavetablemodel.h"
LeaveItemDelegate::LeaveItemDelegate(QObject* parent):QStyledItemDelegate(parent)
    , itemButton1(new ItemButton("同意"))
    , itemButton2(new ItemButton("拒绝"))
{
    connect(this, SIGNAL(signals1( const QModelIndex&)), this, SLOT(showMessage1( const QModelIndex&)));
    connect(this, SIGNAL(signals2( const QModelIndex&)), this, SLOT(showMessage2( const QModelIndex&)));
    message = new calabash::Message;
}

void LeaveItemDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QStyleOptionViewItem viewOption(option);
    initStyleOption(&viewOption, index);
    if (option.state.testFlag(QStyle::State_HasFocus))
        viewOption.state = viewOption.state ^ QStyle::State_HasFocus;

    switch(index.column())
    {

        case LeaveTableModel::OperatorRole_1:// 4
            {
                itemButton1->paintButton(painter, option, mousePos);
            }
            break;
        case LeaveTableModel::OperatorRole_2:// 5
            {
                itemButton2->paintButton(painter, option, mousePos);
            }
            break;
        default:
            {
            }
    }
    QStyledItemDelegate::paint(painter, viewOption, index);
}


bool LeaveItemDelegate::editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index)
{
    QMouseEvent* pEvent = static_cast<QMouseEvent*> (event);
    mousePos = pEvent->pos();

    if (ItemButton::withinButtonRegion(mousePos, option))
    {
        switch (event->type())
        {
            case QEvent::MouseButtonPress:
                {
                    switch(index.column())
                    {
                        case LeaveTableModel::OperatorRole_1:// 4
                            {
                                itemButton1->setStatusPressed();
                            }
                            break;
                        case LeaveTableModel::OperatorRole_2:// 5
                            {
                                itemButton2->setStatusPressed();
                            }
                            break;

                    }
                    return false;
                }
                break;
            case QEvent::MouseButtonRelease:
                {
                    switch(index.column())
                    {
                        case LeaveTableModel::OperatorRole_1:// 4
                            {
                                itemButton1->setStatusReleased();
                                emit signals1(index);
                            }
                            break;
                        case LeaveTableModel::OperatorRole_2:// 5
                            {
                                itemButton2->setStatusReleased();
                                emit signals2(index);
                            }
                            break;
                    }
                    return true;
                }
                break;
            default:
                {
                    switch(index.column())
                    {
                        case LeaveTableModel::OperatorRole_1:// 4
                            {
                                itemButton1->setStatusNone();
                            }
                            break;
                        case LeaveTableModel::OperatorRole_2:// 5
                            {
                                itemButton2->setStatusNone();
                            }
                            break;

                    }
                    QStyledItemDelegate::editorEvent(event, model, option, index);
                    return false;
                }
                break;
        }
    }
    else
    {
        switch(index.column())
        {
            case LeaveTableModel::OperatorRole_1:// 4
                {
                    itemButton1->setStatusNone();
                }
                break;
            case LeaveTableModel::OperatorRole_2:// 5
                {
                    itemButton2->setStatusNone();
                }
                break;

        }
        return QStyledItemDelegate::editorEvent(event, model, option, index);
    }

    return true;
}

void LeaveItemDelegate::showMessage1(const QModelIndex &index)
{
    qDebug() << "showMessage1     --" << index;
    message->Info(QString("同意请求"));
}

void LeaveItemDelegate::showMessage2(const QModelIndex &index)
{
    qDebug() << "showMessage2     --" << index;
    message->Info(QString("拒绝请求"));
}



ItemButton::ItemButton(QString iconName) : buttonWidget(new QPushButton())
{
    buttonIconName = iconName;
        buttonWidget->setStyleSheet("\
                                QPushButton{\
                                    border: none;\
                                    background-color: transparent;\
                                    image: url(:/images/" + iconName + ".png);\
                                }\
                                QPushButton:hover {\
                                    image: url(:/images/" + iconName + "-hover.png);\
                                }\
                                QPushButton:pressed {\
                                    image: url(:/images/" + iconName + "-pressed.png);\
                                }\
                              ");
}

void ItemButton::paintButton(QPainter* painter, const QStyleOptionViewItem& option, const QPoint& pos)
{
    QStyleOptionButton buttonOption;
    buttonOption.rect = QRect(option.rect.x() + posx, option.rect.y() + poxy, width, height);
    buttonOption.state = QStyle::State_Enabled;
    if(buttonOption.rect.contains(pos))
    {
        if(buttonStatus == BUTTON_STATUS::HOVER)
            buttonOption.state |= QStyle::State_MouseOver;
        else if(buttonStatus == BUTTON_STATUS::PRESSED)
            buttonOption.state |= QStyle::State_Sunken;
    }

// 根据需要选择使用的绘制函数
//    QApplication::style()->drawControl(QStyle::CE_PushButton, &buttonOption, painter, buttonWidget.data());
//    option.widget->style()->drawControl(QStyle::CE_PushButton, &buttonOption, painter, buttonWidget.data());
    buttonWidget.data()->style()->drawControl(QStyle::CE_PushButton, &buttonOption, painter, buttonWidget.data());
}

void ItemButton::setStatusNone()
{
    buttonStatus = NONE;
}

void ItemButton::setStatusHover()
{
    buttonStatus = HOVER;
}

void ItemButton::setStatusPressed()
{
    buttonStatus = PRESSED;
}

void ItemButton::setStatusReleased()
{
    buttonStatus = RELEASED;
}

bool ItemButton::withinButtonRegion(const QPoint pos, const QStyleOptionViewItem& option)
{
    QStyleOptionButton buttonOption;
    buttonOption.rect = QRect(option.rect.x() + posx, option.rect.y() + poxy, width, height);
    return buttonOption.rect.contains(pos);
}


