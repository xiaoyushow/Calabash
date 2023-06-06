#ifndef SLIDEPAGE_H
#define SLIDEPAGE_H

#include <QWidget>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QStackedWidget>

class SlidePage : public QWidget
{
    Q_OBJECT
public:
    explicit SlidePage(QWidget *parent = nullptr);
    ~SlidePage();
    //添加页面
    void addPage(QWidget *w);
private:
    int pageIndex;
    int pageCount;
    bool draggingFlag;

    QScrollArea *scrollArea;
    QWidget *mainWidget;
    QWidget *bottomWidget;
    QHBoxLayout *bottomHBoxLayout;

signals:

};

#endif // SLIDEPAGE_H
