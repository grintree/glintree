#include "mFlowRightCaptchaWidget.h"
#include "mOptionBox.h"
#include "mRightSave.h"
#include "style.h"
#include "TaskFlow/mFcModels.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>

MFlowRightCaptchaWidget::MFlowRightCaptchaWidget(QWidget *parent,MFlowStepData* data) :
    QWidget(parent)
{
    m_data = data;
    m_params = static_cast<MFlowStepParamsCaptcha*>(data->stepparams);

    boxLayout = new QVBoxLayout(this);
    boxLayout->setContentsMargins(10,5,10,5);
    initInfoUI();
    initSenierOptionUI();

    MRightSave *rightSave = new MRightSave(this);
    connect(rightSave,&MRightSave::notifySave,this,&MFlowRightCaptchaWidget::onSave);
    boxLayout->addWidget(rightSave);
    boxLayout->addStretch(10);
}
void MFlowRightCaptchaWidget::onSave(bool clicked){
    Q_UNUSED(clicked);
    m_params->name = nameLine->text();
    m_params->waitSleep = waitSpin->value();
    m_params->eleXpath = eleXpathLine->text().trimmed();
    m_params->inputXpath = inputXpathLine->text().trimmed();
    m_params->isLoop = loopCheck->checkState()==Qt::CheckState::Checked?true:false;
}
void MFlowRightCaptchaWidget::initInfoUI(){
    QWidget *infoWidget = new QWidget(this);
    infoWidget->setFixedHeight(40);
    QHBoxLayout *infoLayout = new QHBoxLayout(infoWidget);
    infoLayout->setContentsMargins(0,0,0,0);

    QLabel * nameLabel = new QLabel(infoWidget);
    nameLabel->setText(tr("操作名称"));
    nameLine = new QLineEdit(infoWidget);
    nameLine->setStyleSheet(m_stylesheet_QLineEdit);
    nameLine->setText(m_params->name);
    nameLine->setFixedWidth(160);

    infoLayout->addWidget(nameLabel);
    infoLayout->addSpacing(20);
    infoLayout->addWidget(nameLine);
    infoLayout->addStretch(10);

    boxLayout->addWidget(infoWidget);
}
void MFlowRightCaptchaWidget::initSenierOptionUI(){
    MOptionBox *optionBox = new MOptionBox(this);

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

    QLabel *eleXpathLabel = new QLabel(optionBox->gWidget);
    eleXpathLabel->setText(tr("验证码图片Xpath"));
    eleXpathLine = new QLineEdit(optionBox->gWidget);
    eleXpathLine->setMaximumWidth(180);
    eleXpathLine->setStyleSheet(m_stylesheet_QLineEdit);
    eleXpathLine->setText(m_params->eleXpath);
    eleXpathLine->setPlaceholderText("例如 //img[@id='captcha']");
    optionBox->gLayout->addWidget(eleXpathLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(eleXpathLine,optionBox->rowStart,1);
    ++optionBox->rowStart;

    QLabel *inputXpathLabel = new QLabel(optionBox->gWidget);
    inputXpathLabel->setText(tr("验证码输入框Xpath"));
    inputXpathLine = new QLineEdit(optionBox->gWidget);
    inputXpathLine->setMaximumWidth(180);
    inputXpathLine->setStyleSheet(m_stylesheet_QLineEdit);
    inputXpathLine->setText(m_params->inputXpath);
    inputXpathLine->setPlaceholderText("例如 //input[@id='code']");
    optionBox->gLayout->addWidget(inputXpathLabel,optionBox->rowStart,0);
    optionBox->gLayout->addWidget(inputXpathLine,optionBox->rowStart,1);
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
MFlowRightCaptchaWidget::~MFlowRightCaptchaWidget(){
}
