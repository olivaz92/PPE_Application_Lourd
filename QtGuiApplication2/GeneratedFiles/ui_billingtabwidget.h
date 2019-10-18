/********************************************************************************
** Form generated from reading UI file 'billingtabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLINGTABWIDGET_H
#define UI_BILLINGTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillingTabWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbBornes;
    QWidget *widgetBill;

    void setupUi(QWidget *BillingTabWidget)
    {
        if (BillingTabWidget->objectName().isEmpty())
            BillingTabWidget->setObjectName(QString::fromUtf8("BillingTabWidget"));
        BillingTabWidget->resize(867, 643);
        verticalLayout_2 = new QVBoxLayout(BillingTabWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(BillingTabWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbBornes = new QComboBox(BillingTabWidget);
        cbBornes->setObjectName(QString::fromUtf8("cbBornes"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbBornes);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        widgetBill = new QWidget(BillingTabWidget);
        widgetBill->setObjectName(QString::fromUtf8("widgetBill"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetBill->sizePolicy().hasHeightForWidth());
        widgetBill->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(widgetBill);


        retranslateUi(BillingTabWidget);

        QMetaObject::connectSlotsByName(BillingTabWidget);
    } // setupUi

    void retranslateUi(QWidget *BillingTabWidget)
    {
        BillingTabWidget->setWindowTitle(QApplication::translate("BillingTabWidget", "Form", nullptr));
        label->setText(QApplication::translate("BillingTabWidget", "Borne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BillingTabWidget: public Ui_BillingTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLINGTABWIDGET_H
