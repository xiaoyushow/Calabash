#ifndef TABLEVIEWDELEGATE_H
#define TABLEVIEWDELEGATE_H

#include <QPainter>
#include <QObject>
#include <QStyledItemDelegate>
#include <QPushButton>
#include <QEvent>
#include <QAbstractItemModel>
#include <QApplication>
#include <QMouseEvent>
#include <QToolTip>
const int FILE_OPERATE_COLUMN  = 10;
class TableViewDelegate: public QStyledItemDelegate
{
    Q_OBJECT

public:
    explicit TableViewDelegate(QWidget *parent = 0);
    ~TableViewDelegate();
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index);

signals:
    void agree(const QModelIndex &index);
    void refuse(const QModelIndex &index);

private:
    QPoint m_mousePoint;  // 鼠标位置
    QScopedPointer<QPushButton> m_pAgreeButton;
    QScopedPointer<QPushButton> m_pRefuseButton;
    QStringList m_list;
    int m_nSpacing;  // 按钮之间的间距
    int m_nWidth;  // 按钮宽度
    int m_nHeight;  // 按钮高度
    int m_nType;  // 按钮状态-1：划过 2：按下
};


#endif // TABLEVIEWDELEGATE_H
