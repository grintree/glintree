#ifndef RUNDIALOG_H
#define RUNDIALOG_H

#include <QDialog>
#include "RunMessage.h"


QT_BEGIN_NAMESPACE;
class QVBoxLayout;
class QHBoxLayout;
class QStackedWidget;
class QToolButton;
class QLineEdit;
class QTableWidget;
class QTableWidgetItem;
QT_END_NAMESPACE;

class RunThreadPipline;
class RunHelper;
class MFlowStepParams;
class RunWebEngineViewManager;
class RunWebEngineView;

class MFlowStepParamsOpenWeb;
class MFlowStepParamsClickEle;
class MFlowStepParamsExtract;
class MFlowStepParamsLoop;
class MFlowStepParamsInput;
class MFlowStepParamsSwitch;
class MFlowStepParamsMouse;
class MFlowStepParamsCaptcha;
class MFlowStepParamsIf;
class MFlowStepParamsEndLoop;
class MFlowStepParamsEnd;

class ComLoadingLabel;
struct MTask;

struct MExtractSingleItem;

class  RunDialog : public QDialog
{
    Q_OBJECT
public:
    friend class RunThreadTimer;
    explicit RunDialog(MTask *task);
    ~RunDialog();
protected:
    void closeEvent(QCloseEvent *) override;
private:
    QVBoxLayout *boxLayout;
    void initTopMenuUi();
    QLineEdit *addrLine;
    ComLoadingLabel *loadingLabel;
    void initWebViewUi();
    QStackedWidget *webViewStacked;

    void initBottomUi();
    QToolButton  *tableStateBtn;
    QTableWidget *tableWidget;
    QLabel *pageLabel;
    QLabel *pageLogLabel;
    QLabel *bottomLogLabel; // 采集过程日志
    QPushButton *exportBtn;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    void updatePageData(int num,bool isShowLastPage);

    QStringList mFields;
private:
    MTask *mTask;
    RunThreadPipline *mThreadPipline;
    RunHelper *mHelper;
    RunMessage *mMessage;
    RunWebEngineViewManager *mWebViewManager;

    void startNextStep(QString lastStepID);

    void startOpenWeb(MFlowStepParamsOpenWeb * params);// 01x
    void startClickEle(MFlowStepParamsClickEle * params);// 02x
    void startClickEleRoll(MFlowStepParamsClickEle * params,QString feedback,QString clickScript = QString());
    void startExtract(MFlowStepParamsExtract * params);// 03x
    void startInput(MFlowStepParamsInput * params);// 04x
    void startCaptcha(MFlowStepParamsCaptcha * params);// 05x 验证码
    void startSwitch(MFlowStepParamsSwitch * params);// 06x 切换下拉选项
    void startLoopHead(MFlowStepParamsLoop * params);// 07x
    void startLoopTail(QString loopStepID,QString loopInnerLastStepID);// 07x
    void startMouse(MFlowStepParamsMouse * params);// 08x
    void startJudge(MFlowStepParamsIf * params);// 09x 判断条件
    void startEndLoop(MFlowStepParamsEndLoop * params);// 10x 结束循环
    void startEnd(MFlowStepParamsEnd * params);// 11x 结束

    void endOpenWeb(MFlowStepParamsOpenWeb *params);
    void endClickEle(MFlowStepParamsClickEle * params,bool next);
    void endExtract(MFlowStepParamsExtract * params,QString feedback);
    void endInput(MFlowStepParamsInput * params);
    void endMouse(MFlowStepParamsMouse * params);
    void endCaptcha(MFlowStepParamsCaptcha * params);
    void endSwitch(MFlowStepParamsSwitch * params);

    void sendStartJobCommand();
    void sendStopJobCommand(RunMessage::MessageType messageType,const QString &msg);
    RunMessage::MessageType mSendStopMessageType;
    QString                 mSendStopMsg;

    void getData(int p = 1);
    int  mCurPage = 1;   // 当前页的页数
    int  mTotalPage = 0; // 当前总页数

public:
    RunHelper *getHelper();
    MTask *getTask();

signals:
    void notifyPiplinePushData(QString stepID,QString res);
public slots:
    void onThreadPiplineJobFinished();
    void onThreadPiplineUpdateData(int num,QStringList names,QStringList values);
    void onThreadPiplineAlert(int type,QString info);

    void onWebViewUrlChanged(const QString &url);
    void onCleanWebViews(RunWebEngineView *webView);//切换显示中的webView（不需要同步执行切换）


};

#endif // RUNDIALOG_H
