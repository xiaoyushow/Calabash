#ifndef LEAVEITEMDELEGATE_H
#define LEAVEITEMDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QPainter>
#include <QApplication>
#include <QStyledItemDelegate>
#include <QPushButton>
#include <QProgressBar>
#include <QPainter>
#include <QMouseEvent>
#include "message.h"
#include <QDebug>

    // 自定义Button属性
    class ItemButton
    {
    public:
        static const int posx = 15;
        static const int poxy = 5;
        static const int width = 20;
        static const int height = width;
        enum BUTTON_STATUS
        {
            NONE, HOVER, PRESSED, RELEASED
        };

    private:
        QString buttonIconName;
        QScopedPointer<QPushButton> buttonWidget;
        BUTTON_STATUS buttonStatus = NONE;

    public:
        ItemButton(QString iconName);
        void paintButton(QPainter* painter, const QStyleOptionViewItem& option, const QPoint& pos );

        void inline setStatusNone();
        void inline setStatusHover();
        void inline setStatusPressed();
        void inline setStatusReleased();

        static bool withinButtonRegion(const QPoint, const QStyleOptionViewItem& option);

    };


    class LeaveItemDelegate : public QStyledItemDelegate
    {
        Q_OBJECT
    public:
        LeaveItemDelegate(QObject* parent = nullptr);

        void paint(QPainter* painter, const QStyleOptionViewItem& option,
                   const QModelIndex& index) const override;

//        QSize sizeHint(const QStyleOptionViewItem& option,
//                       const QModelIndex& index) const override;
        bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option,
                         const QModelIndex& index) override;

    private:
        QScopedPointer<ItemButton> itemButton1;
        QScopedPointer<ItemButton> itemButton2;
        QPoint mousePos;
        calabash::Message *message{};

    signals:
        void signals1( const QModelIndex& index);
        void signals2( const QModelIndex& index);

    public slots:
        void showMessage1( const QModelIndex& index);
        void showMessage2( const QModelIndex& index);
    };


#endif // LEAVEITEMDELEGATE_H
