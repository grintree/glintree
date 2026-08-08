#include "ComSpinWidget.h"
#include "style.h"
#include <QLabel>
#include <QSpinBox>
#include <QHBoxLayout>

ComSpinWidget::ComSpinWidget(const QString &name,int min,int max,int value,int left,int right,QWidget *parent) : QWidget(parent)
{
    this->value = value;

    QHBoxLayout *boxHLayout = new QHBoxLayout(this);
    boxHLayout->setContentsMargins(left,0,right,0);

    QLabel *nameLabel = new QLabel(this);
    nameLabel->setStyleSheet(".QLabel{color:rgb(29,29,31);font-family:Microsoft YaHei;font-size:16px;}");
    nameLabel->setText(name);


    QSpinBox *countSpin = new QSpinBox(this);
    countSpin->setMinimum(min);
    countSpin->setMaximum(max);
//    countSpin->setSuffix("秒");
    countSpin->setFixedWidth(100);
    countSpin->setStyleSheet(m_stylesheet_QSpinBox);
    countSpin->setValue(value);

    boxHLayout->addWidget(nameLabel);
    boxHLayout->addWidget(countSpin);
    boxHLayout->addStretch(10);



}
