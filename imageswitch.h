#ifndef IMAGESWITCH_H
#define IMAGESWITCH_H


#include <QWidget>

class ImageSwitch : public QWidget
{
    Q_OBJECT
    Q_ENUMS(ButtonStyle)

    Q_PROPERTY(bool isChecked READ getChecked WRITE setChecked)
    Q_PROPERTY(ButtonStyle buttonStyle READ getButtonStyle WRITE setButtonStyle)

public:
    enum ButtonStyle {
        ButtonStyle_1 = 0,  //开关样式1
        ButtonStyle_2 = 1,  //开关样式2
        ButtonStyle_3 = 2,  //开关样式3
        ButtonStyle_4 = 3   //开关样式4

    };

    explicit ImageSwitch(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *event);

private:
    bool isChecked;
    ButtonStyle buttonStyle;

    QString imgOffFile;
    QString imgOnFile;
    QString imgFile;

public:
    bool getChecked()               const;
    ButtonStyle getButtonStyle()    const;

    QSize sizeHint()                const;
    QSize minimumSizeHint()         const;

public Q_SLOTS:
    //设置是否选中
    void setChecked(bool isChecked);
    //设置按钮样式
    void setButtonStyle(const ImageSwitch::ButtonStyle &buttonStyle);

Q_SIGNALS:
    void checkedChanged(bool checked);
};

#endif // IMAGESWITCH_H

