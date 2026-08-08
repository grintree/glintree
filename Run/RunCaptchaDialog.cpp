#include "RunCaptchaDialog.h"
#include "style.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QPixmap>

RunCaptchaDialog::RunCaptchaDialog(QWidget *parent,const QByteArray &imageData,const QString &format) : QDialog(parent)
{
    setWindowTitle("请输入验证码");
    setWindowFlags(Qt::Dialog| Qt::WindowCloseButtonHint);
    setFixedSize(360,260);
    setAttribute(Qt::WA_StyledBackground,true);
    setStyleSheet(".RunCaptchaDialog{background-color:rgb(255,255,255);}");

    QVBoxLayout *boxLayout = new QVBoxLayout(this);
    boxLayout->setContentsMargins(18,16,18,16);
    boxLayout->setSpacing(12);

    QLabel *tipLabel = new QLabel(this);
    tipLabel->setStyleSheet(m_stylesheet_QLabel);
    tipLabel->setText("识别下方验证码并输入：");

    imageLabel = new QLabel(this);
    imageLabel->setFixedHeight(90);
    imageLabel->setAlignment(Qt::AlignCenter);
    imageLabel->setStyleSheet("QLabel{border:1px solid rgb(209,209,214);border-radius:6px;background:rgb(245,245,247);}");
    QPixmap pix;
    if(pix.loadFromData(imageData,format.toLatin1())){
        imageLabel->setPixmap(pix.scaledToHeight(80,Qt::SmoothTransformation));
    }else{
        imageLabel->setText("验证码图片加载失败，请刷新页面后重试");
    }

    inputLine = new QLineEdit(this);
    inputLine->setStyleSheet(m_stylesheet_QLineEdit);
    inputLine->setFixedHeight(32);
    inputLine->setPlaceholderText("请输入验证码");

    QWidget *btnWidget = new QWidget(this);
    QHBoxLayout *btnLayout = new QHBoxLayout(btnWidget);
    btnLayout->setContentsMargins(0,0,0,0);

    QPushButton *okBtn = new QPushButton("确定",btnWidget);
    okBtn->setStyleSheet(m_stylesheet_QPushButton_blue);
    okBtn->setCursor(Qt::PointingHandCursor);
    okBtn->setFixedSize(84,30);
    connect(okBtn,&QPushButton::clicked,this,&RunCaptchaDialog::onOk);

    QPushButton *skipBtn = new QPushButton("跳过",btnWidget);
    skipBtn->setStyleSheet(m_stylesheet_QPushButton_hollow);
    skipBtn->setCursor(Qt::PointingHandCursor);
    skipBtn->setFixedSize(84,30);
    connect(skipBtn,&QPushButton::clicked,this,&RunCaptchaDialog::onSkip);

    btnLayout->addStretch(10);
    btnLayout->addWidget(okBtn);
    btnLayout->addSpacing(10);
    btnLayout->addWidget(skipBtn);

    boxLayout->addWidget(tipLabel);
    boxLayout->addWidget(imageLabel);
    boxLayout->addWidget(inputLine);
    boxLayout->addWidget(btnWidget);
}
QString RunCaptchaDialog::inputText() const{
    return m_inputText;
}
bool RunCaptchaDialog::isSkipped() const{
    return m_skip;
}
void RunCaptchaDialog::onOk(){
    m_inputText = inputLine->text().trimmed();
    m_skip = false;
    accept();
}
void RunCaptchaDialog::onSkip(){
    m_inputText.clear();
    m_skip = true;
    accept();
}
