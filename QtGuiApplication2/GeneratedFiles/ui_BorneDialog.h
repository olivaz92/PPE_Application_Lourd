/********************************************************************************
** Form generated from reading UI file 'BorneDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORNEDIALOG_H
#define UI_BORNEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BorneDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *BorneDialog)
    {
        if (BorneDialog->objectName().isEmpty())
            BorneDialog->setObjectName(QString::fromUtf8("BorneDialog"));
        BorneDialog->resize(251, 66);
        verticalLayout = new QVBoxLayout(BorneDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(BorneDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(BorneDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(BorneDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(BorneDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), BorneDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(BorneDialog);
    } // setupUi

    void retranslateUi(QDialog *BorneDialog)
    {
        BorneDialog->setWindowTitle(QApplication::translate("BorneDialog", "BorneDialog", nullptr));
        label->setText(QApplication::translate("BorneDialog", "Borne name : ", nullptr));
        pushButton->setText(QApplication::translate("BorneDialog", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorneDialog: public Ui_BorneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORNEDIALOG_H
