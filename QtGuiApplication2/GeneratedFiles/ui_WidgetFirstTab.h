/********************************************************************************
** Form generated from reading UI file 'WidgetFirstTab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETFIRSTTAB_H
#define UI_WIDGETFIRSTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetFirstTab
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEdit;
    QPushButton *addButton;
    QListWidget *listWidget;

    void setupUi(QWidget *WidgetFirstTab)
    {
        if (WidgetFirstTab->objectName().isEmpty())
            WidgetFirstTab->setObjectName(QString::fromUtf8("WidgetFirstTab"));
        WidgetFirstTab->resize(618, 405);
        verticalLayout = new QVBoxLayout(WidgetFirstTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(WidgetFirstTab);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        horizontalLayout->addWidget(labelName);

        lineEdit = new QLineEdit(WidgetFirstTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        addButton = new QPushButton(WidgetFirstTab);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(WidgetFirstTab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(WidgetFirstTab);

        QMetaObject::connectSlotsByName(WidgetFirstTab);
    } // setupUi

    void retranslateUi(QWidget *WidgetFirstTab)
    {
        WidgetFirstTab->setWindowTitle(QApplication::translate("WidgetFirstTab", "WidgetFirstTab", nullptr));
        labelName->setText(QApplication::translate("WidgetFirstTab", "Nom de la borne :", nullptr));
        addButton->setText(QApplication::translate("WidgetFirstTab", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetFirstTab: public Ui_WidgetFirstTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETFIRSTTAB_H
