/********************************************************************************
** Form generated from reading UI file 'mFlowIfWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MFLOWIFWIDGET_H
#define UI_MFLOWIFWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MFlowIfWidget
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

    void setupUi(QWidget *MFlowIfWidget)
    {
        if (MFlowIfWidget->objectName().isEmpty())
            MFlowIfWidget->setObjectName("MFlowIfWidget");
        MFlowIfWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(MFlowIfWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 0, 2, 1);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        topWidget = new QWidget(MFlowIfWidget);
        topWidget->setObjectName("topWidget");
        topWidget->setMinimumSize(QSize(0, 20));
        topWidget->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(topWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(6, 0, 6, 0);
        titleLabel = new QLabel(topWidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(0, 0));
        titleLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(titleLabel);


        verticalLayout->addWidget(topWidget);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        bottomWidget = new QWidget(MFlowIfWidget);
        bottomWidget->setObjectName("bottomWidget");
        bottomWidget->setMinimumSize(QSize(0, 20));

        verticalLayout->addWidget(bottomWidget);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(MFlowIfWidget);

        QMetaObject::connectSlotsByName(MFlowIfWidget);
    } // setupUi

    void retranslateUi(QWidget *MFlowIfWidget)
    {
        MFlowIfWidget->setWindowTitle(QCoreApplication::translate("MFlowIfWidget", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("MFlowIfWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MFlowIfWidget: public Ui_MFlowIfWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MFLOWIFWIDGET_H
