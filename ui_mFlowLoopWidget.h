/********************************************************************************
** Form generated from reading UI file 'mFlowLoopWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MFLOWLOOPWIDGET_H
#define UI_MFLOWLOOPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MFlowLoopWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *bottomWidget;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *MFlowLoopWidget)
    {
        if (MFlowLoopWidget->objectName().isEmpty())
            MFlowLoopWidget->setObjectName("MFlowLoopWidget");
        MFlowLoopWidget->resize(400, 300);
        MFlowLoopWidget->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(MFlowLoopWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 0, 2, 1);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        topWidget = new QWidget(MFlowLoopWidget);
        topWidget->setObjectName("topWidget");
        topWidget->setMinimumSize(QSize(0, 25));
        topWidget->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(topWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(6, 0, 6, 0);
        titleLabel = new QLabel(topWidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMaximumSize(QSize(16777215, 16777215));
        titleLabel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(titleLabel);


        verticalLayout->addWidget(topWidget);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        bottomWidget = new QWidget(MFlowLoopWidget);
        bottomWidget->setObjectName("bottomWidget");
        bottomWidget->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bottomWidget);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(MFlowLoopWidget);

        QMetaObject::connectSlotsByName(MFlowLoopWidget);
    } // setupUi

    void retranslateUi(QWidget *MFlowLoopWidget)
    {
        MFlowLoopWidget->setWindowTitle(QCoreApplication::translate("MFlowLoopWidget", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("MFlowLoopWidget", "\345\276\252\347\216\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MFlowLoopWidget: public Ui_MFlowLoopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MFLOWLOOPWIDGET_H
