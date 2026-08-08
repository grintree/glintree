#ifndef M_FLOW_RIGHT_IF_WIDGET_H
#define M_FLOW_RIGHT_IF_WIDGET_H

#include <QWidget>
QT_BEGIN_NAMESPACE;
class QVBoxLayout;
class QLineEdit;
class QSpinBox;
class QCheckBox;
class QComboBox;
QT_END_NAMESPACE;
class MFlowStepData;
class MFlowStepParamsIf;
class MOptionBox;
class MFlowRightIfWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MFlowRightIfWidget(QWidget *parent,MFlowStepData* data);
    ~MFlowRightIfWidget();
private:
    QVBoxLayout *boxLayout;
    MFlowStepData* m_data;
    MFlowStepParamsIf *m_params;
    void initInfoUI();
    QLineEdit *nameLine;
    void initSenierOptionUI();
    MOptionBox *optionBox;
    QSpinBox *waitSpin;
    QCheckBox *loopCheck;// 使用循环
    QComboBox *judgeTypeCombo;//判断方式
    QLineEdit *eleXpathLine;//判断元素xpath
    QLineEdit *judgeValueLine;//期望值
    void initRetryUI();// 重试
public slots:
    void onSave(bool clicked);
};


#endif // M_FLOW_RIGHT_IF_WIDGET_H
