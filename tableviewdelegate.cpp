#include "tableviewdelegate.h"
#include <QDebug>
TableViewDelegate::TableViewDelegate(QWidget *parent)
    : QStyledItemDelegate(parent),
      m_pAgreeButton(new QPushButton()),
      m_pRefuseButton(new QPushButton()),
      m_nSpacing(5),
      m_nWidth(25),
      m_nHeight(20)
{
    // 设置按钮正常、划过、按下样式
    m_pAgreeButton->setStyleSheet("QPushButton {border: none; background-color: transparent; image:url(:/images/agree.png);} \
                                 QPushButton:hover {image:url(:/images/agree.png);} \
                                 QPushButton:pressed {image:url(:/images/agree.png);}");

    m_pRefuseButton->setStyleSheet("QPushButton {border: none; background-color: transparent; image:url(:/images/refuse.png);} \
                                 QPushButton:hover {image:url(:/images/refuseHover.png);} \
                                 QPushButton:pressed {image:url(:/images/refuse.png);}");
    qDebug() << " 设置样式";
    m_list << QStringLiteral("agree") << QStringLiteral("refuse");
}

TableViewDelegate::~TableViewDelegate()
{

}

// 绘制按钮
void TableViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem viewOption(option);
    initStyleOption(&viewOption, index);
    if (option.state.testFlag(QStyle::State_HasFocus))
        viewOption.state = viewOption.state ^ QStyle::State_HasFocus;

    QStyledItemDelegate::paint(painter, viewOption, index);

    if (index.column() == FILE_OPERATE_COLUMN)
    {
        // 计算按钮显示区域
        int nCount = m_list.count();
        int nHalf = (option.rect.width() - m_nWidth * nCount - m_nSpacing * (nCount - 1)) / 2;
        int nTop = (option.rect.height() - m_nHeight) / 2;

        for (int i = 0; i < nCount; ++i)
        {
            // 绘制按钮
            QStyleOptionButton button;
            button.rect = QRect(option.rect.left() + nHalf + m_nWidth * i + m_nSpacing * i,
                                option.rect.top() + nTop,  m_nWidth, m_nHeight);
            button.state |= QStyle::State_Enabled;
            button.iconSize = QSize(12, 12);
            //button.icon = QIcon(QString(":/images/%1").arg(m_list.at(i)));

            if (button.rect.contains(m_mousePoint))
            {
                if (m_nType == 0)
                {
                    button.state |= QStyle::State_MouseOver;
                    //button.icon = QIcon(QString(":/images/%1Hover").arg(m_list.at(i)));
                }
                else if (m_nType == 1)
                {
                    button.state |= QStyle::State_Sunken;
                    //button.icon = QIcon(QString(":/images/%1Pressed").arg(m_list.at(i)));
                }
            }

            QWidget *pWidget = (i == 0) ? m_pAgreeButton.data() : m_pRefuseButton.data();
            QApplication::style()->drawControl(QStyle::CE_PushButton, &button, painter, pWidget);
        }
    }
}

// 响应按钮事件 - 划过、按下
bool TableViewDelegate::editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index)
{
    if (index.column() != FILE_OPERATE_COLUMN)
        return false;

    m_nType = -1;
    bool bRepaint = false;
    QMouseEvent *pEvent = static_cast<QMouseEvent *> (event);
    m_mousePoint = pEvent->pos();

    int nCount = m_list.count();
    int nHalf = (option.rect.width() - m_nWidth * nCount - m_nSpacing * (nCount - 1)) / 2;
    int nTop = (option.rect.height() - m_nHeight) / 2;

    // 还原鼠标样式
    QApplication::restoreOverrideCursor();

    for (int i = 0; i < nCount; ++i)
    {
        QStyleOptionButton button;
        button.rect = QRect(option.rect.left() + nHalf + m_nWidth * i + m_nSpacing * i,
                            option.rect.top() + nTop,  m_nWidth, m_nHeight);

        // 鼠标位于按钮之上
        if (!button.rect.contains(m_mousePoint))
            continue;

        bRepaint = true;
        switch (event->type())
        {
        // 鼠标滑过
        case QEvent::MouseMove:
        {
            // 设置鼠标样式为手型
            QApplication::setOverrideCursor(Qt::PointingHandCursor);

            m_nType = 0;
            QToolTip::showText(pEvent->globalPosition().toPoint(), m_list.at(i));
            break;
        }
        // 鼠标按下
        case QEvent::MouseButtonPress:
        {
            m_nType = 1;
            break;
        }
        // 鼠标释放
        case QEvent::MouseButtonRelease:
        {
            if (i == 0)
            {
                emit agree(index);
                qDebug() << " i = 0";
            }
            else
            {
                emit refuse(index);
                qDebug() << " i = 1";
            }
            break;
        }
        default:
            break;
        }
    }

    return bRepaint;
}

