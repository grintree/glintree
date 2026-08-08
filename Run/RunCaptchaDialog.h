#ifndef RUNCAPTCHADIALOG_H
#define RUNCAPTCHADIALOG_H

#include <QDialog>
QT_BEGIN_NAMESPACE;
class QLineEdit;
class QLabel;
QT_END_NAMESPACE;

// 验证码识别步骤：展示验证码图片，等待用户手动输入后返回结果
class RunCaptchaDialog : public QDialog
{
    Q_OBJECT
public:
    explicit RunCaptchaDialog(QWidget *parent,const QByteArray &imageData,const QString &format);
    QString inputText() const;
    bool isSkipped() const;// 用户选择跳过（不输入验证码）

private slots:
    void onOk();
    void onSkip();

private:
    QLineEdit *inputLine;
    QLabel *imageLabel;
    QString m_inputText;
    bool m_skip = false;
};

#endif // RUNCAPTCHADIALOG_H
