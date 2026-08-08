#include "TaskBrowserMenu.h"
#include <QHBoxLayout>
#include <QLabel>

TaskBrowserMenu::TaskBrowserMenu(QWidget *parent) : QWidget(parent)
{

    setAttribute(Qt::WA_StyledBackground,true);
    setStyleSheet(".TaskBrowserMenu{background-color:rgba(10,132,255,0.08);border-style: solid;border-width: 1px; border-radius: 2px;border-color:rgb(10,132,255);padding: 1px;}");

    QHBoxLayout *boxLayout = new QHBoxLayout(this);
    boxLayout->setContentsMargins(0,0,0,0);

    QLabel *tipLabel = new QLabel(this);
    tipLabel->setStyleSheet(".QLabel {color:rgb(10,132,255);font-family:Microsoft YaHei;font-size:16px;}");
    tipLabel->setText(tr("您当前处于浏览模式，可以像在浏览器中一样正常点击操作网页，如需编辑规则，请切回。"));
    boxLayout->addSpacing(20);
    boxLayout->addWidget(tipLabel);
}
