#ifndef M_FLOW_RIGHT_CAPTCHA_WIDGET_H
#define M_FLOW_RIGHT_CAPTCHA_WIDGET_H

#include <QWidget>
QT_BEGIN_NAMESPACE;
class QVBoxLayout;
class QLineEdit;
class QSpinBox;
class QCheckBox;
QT_END_NAMESPACE;
class MFlowStepData;
class MFlowStepParamsCaptcha;
class MOptionBox;

class MFlowRightCaptchaWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MFlowRightCaptchaWidget(QWidget *parent,MFlowStepData* data);
    ~MFlowRightCaptchaWidget();
private:
    QVBoxLayout *boxLayout;
    MFlowStepData* m_data;
    MFlowStepParamsCaptcha *m_params;
    void initInfoUI();
    QLineEdit *nameLine;
    void initSenierOptionUI();
    MOptionBox *optionBox;
    QSpinBox *waitSpin;
    QLineEdit *eleXpathLine;//验证码图片元素xpath
    QLineEdit *inputXpathLine;//验证码输入框xpath
    QCheckBox *loopCheck;// 使用循环
public slots:
    void onSave(bool clicked);
};

#endif // M_FLOW_RIGHT_CAPTCHA_WIDGET_H
