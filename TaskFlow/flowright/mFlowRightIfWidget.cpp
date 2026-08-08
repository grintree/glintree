#include "mFlowRightIfWidget.h"
#include "Utils/models.h"
#include "mOptionBox.h"
#include "mRightSave.h"
#include "style.h"
#include "TaskFlow/mFcModels.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include <QComboBox>

MFlowRightIfWidget::MFlowRightIfWidget(QWidget *parent,MFlowStepData* data) :
    QWidget(parent)
{
    m_data = data;
    m_params = static_cast<MFlowStepParamsIf*>(data->stepparams);

    boxLayout = new QVBoxLayout(this);
    boxLayout->setContentsMargins(10,5,10,5);
    initInfoUI();
    initSenierOptionUI();
//    initRetryUI();
    MRightSave *rightSave = new MRightSave(this);
    connect(rightSave,&MRightSave::notifySave,this,&MFlowRightIfWidget::onSave);
    boxLayout->addWidget(rightSave);
    boxLayout->addStretch(10);

}
void MFlowRightIfWidget::onSave(bool clicked){
    Q_UNUSED(clicked);
    m_params->name = nameLine->text();
    m_params->waitSleep = waitSpin->value();

    m_params->isLoop = loopCheck->checkState()==Qt::CheckState::Checked?true:false;
    QString judgeType = judgeTypeCombo->currentData().toString();
    if(judgeType.isEmpty()){
        judgeType = "element_exists";
    }
    m_params->judgeType = judgeType;
    m_params->eleXpath = eleXpathLine->text().trimmed();
    m_params->judgeValue = judgeValueLine->text();
}
void MFlowRightIfWidget::initInfoUI(){
    QWidget *infoWidget = new QWidget(this);
    infoWidget->setFixedHeight(50);
    QGridLayout *infoLayout = new QGridLayout(infoWidget);

    QLabel * nameLabel = new QLabel(infoWidget);
    nameLabel->setText(tr("操作名称"));
    nameLine = new QLineEdit(infoWidget);
    nameLine->setStyleSheet(m_stylesheet_QLineEdit);
    nameLine->setText(m_params->name);
    infoLayout->addWidget(nameLabel,0,0);
    infoLayout->addWidget(nameLine,0,1);

    boxLayout->addWidget(infoWidget);
}
void MFlowRightIfWidget::initSenierOptionUI(){

    // 高级选项
    MOptionBox *optionBox = new MOptionBox(this);
    // 执行前等待
    QLabel *waitLabel = new QLabel(optionBox->gWidget);
    waitLabel->setText("执行前等待");
    waitSpin = new QSpinBox(optionBox->gWidget);
    waitSpin->setMinimum(0);
    waitSpin->setMaximum(30);
    waitSpin->setSuffix("秒");
    waitSpin->setMaximumWidth(160);
    waitSpin->setStyleSheet(m_stylesheet_QSpinBox);
    waitSpin->setValue(m_params->waitSleep);

    optionBox->gLayout->addWidget(waitLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(waitSpin,optionBox->rowStart,1);
    ++optionBox->rowStart;

    // 判断方式
    QLabel *judgeTypeLabel = new QLabel(optionBox->gWidget);
    judgeTypeLabel->setText(tr("判断方式"));
    judgeTypeCombo = new QComboBox(optionBox->gWidget);
    judgeTypeCombo->addItem("元素存在","element_exists");
    judgeTypeCombo->addItem("元素文本等于","text_equal");
    judgeTypeCombo->addItem("元素文本包含","text_contains");
    int judgeIndex = judgeTypeCombo->findData(m_params->judgeType);
    judgeTypeCombo->setCurrentIndex(judgeIndex < 0 ? 0 : judgeIndex);
    judgeTypeCombo->setMaximumWidth(180);
    judgeTypeCombo->setStyleSheet(m_stylesheet_QComboBox);
    optionBox->gLayout->addWidget(judgeTypeLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(judgeTypeCombo,optionBox->rowStart,1);
    ++optionBox->rowStart;

    // 判断元素xpath
    QLabel *eleXpathLabel = new QLabel(optionBox->gWidget);
    eleXpathLabel->setText(tr("判断元素xpath"));
    eleXpathLine = new QLineEdit(optionBox->gWidget);
    eleXpathLine->setStyleSheet(m_stylesheet_QLineEdit);
    eleXpathLine->setText(m_params->eleXpath);
    optionBox->gLayout->addWidget(eleXpathLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(eleXpathLine,optionBox->rowStart,1);
    ++optionBox->rowStart;

    // 期望值
    QLabel *judgeValueLabel = new QLabel(optionBox->gWidget);
    judgeValueLabel->setText(tr("期望值"));
    judgeValueLine = new QLineEdit(optionBox->gWidget);
    judgeValueLine->setStyleSheet(m_stylesheet_QLineEdit);
    judgeValueLine->setText(m_params->judgeValue);
    optionBox->gLayout->addWidget(judgeValueLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(judgeValueLine,optionBox->rowStart,1);
    ++optionBox->rowStart;

    QLabel *loopLabel = new QLabel(optionBox->gWidget);
    loopLabel->setText(tr("使用循环"));
    loopCheck = new QCheckBox(optionBox->gWidget);
    loopCheck->setText(tr("点击当前循环中设置的元素"));
    loopCheck->setChecked(m_params->isLoop);
    optionBox->gLayout->addWidget(loopLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(loopCheck,optionBox->rowStart,1);


    boxLayout->addWidget(optionBox);

}
MFlowRightIfWidget::~MFlowRightIfWidget()
{

}
