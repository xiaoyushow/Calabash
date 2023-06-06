//
// Created by Taiga on 2023/3/29.
//

#ifndef CALABASH_QT_SRC_COMPONENT_MESSAGE_H_
#define CALABASH_QT_SRC_COMPONENT_MESSAGE_H_

#include <QLabel>

class QLabel;
class QPropertyAnimation;
class QSequentialAnimationGroup;
class QGraphicsDropShadowEffect;

namespace calabash {

class Message : public QLabel {
 Q_OBJECT

 public:
  explicit Message(QWidget *parent = nullptr);
  ~Message() override;

  void Info(const QString &msg);
  void System(const QString &msg);
  void Success(const QString &msg);
  void Warning(const QString &msg);
  void Error(const QString &msg);

 private:
  void ui_init();
  void an_init();
  void message(const QString &msg);

 private:
  QPropertyAnimation *an_msg_1_{};
  QPropertyAnimation *an_msg_2_{};
  QSequentialAnimationGroup *ang_msg_all_{};
};

} // namespace calabash

#endif //CALABASH_QT_SRC_COMPONENT_MESSAGE_H_
