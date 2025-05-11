/********************************************************************************
** Form generated from reading UI file 'BirthdayAstroWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIRTHDAYASTROWIDGET_H
#define UI_BIRTHDAYASTROWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BirthdayAstroWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_year;
    QLineEdit *yearEdit;
    QLabel *label_month;
    QLineEdit *monthEdit;
    QLabel *label_day;
    QLineEdit *dayEdit;
    QPushButton *queryButton;
    QLabel *resultLabel;

    void setupUi(QWidget *BirthdayAstroWidget)
    {
        if (BirthdayAstroWidget->objectName().isEmpty())
            BirthdayAstroWidget->setObjectName("BirthdayAstroWidget");
        BirthdayAstroWidget->resize(300, 200);
        verticalLayout = new QVBoxLayout(BirthdayAstroWidget);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_year = new QLabel(BirthdayAstroWidget);
        label_year->setObjectName("label_year");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_year);

        yearEdit = new QLineEdit(BirthdayAstroWidget);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, yearEdit);

        label_month = new QLabel(BirthdayAstroWidget);
        label_month->setObjectName("label_month");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_month);

        monthEdit = new QLineEdit(BirthdayAstroWidget);
        monthEdit->setObjectName("monthEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, monthEdit);

        label_day = new QLabel(BirthdayAstroWidget);
        label_day->setObjectName("label_day");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_day);

        dayEdit = new QLineEdit(BirthdayAstroWidget);
        dayEdit->setObjectName("dayEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, dayEdit);


        verticalLayout->addLayout(formLayout);

        queryButton = new QPushButton(BirthdayAstroWidget);
        queryButton->setObjectName("queryButton");

        verticalLayout->addWidget(queryButton);

        resultLabel = new QLabel(BirthdayAstroWidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setAlignment(Qt::AlignCenter);
        resultLabel->setWordWrap(true);

        verticalLayout->addWidget(resultLabel);


        retranslateUi(BirthdayAstroWidget);

        QMetaObject::connectSlotsByName(BirthdayAstroWidget);
    } // setupUi

    void retranslateUi(QWidget *BirthdayAstroWidget)
    {
        BirthdayAstroWidget->setWindowTitle(QCoreApplication::translate("BirthdayAstroWidget", "\346\230\237\345\272\247\346\237\245\350\257\242\345\231\250", nullptr));
        label_year->setText(QCoreApplication::translate("BirthdayAstroWidget", "\345\271\264\344\273\275\357\274\232", nullptr));
        label_month->setText(QCoreApplication::translate("BirthdayAstroWidget", "\346\234\210\344\273\275\357\274\232", nullptr));
        label_day->setText(QCoreApplication::translate("BirthdayAstroWidget", "\346\227\245\346\234\237\357\274\232", nullptr));
        queryButton->setText(QCoreApplication::translate("BirthdayAstroWidget", "\346\237\245\350\257\242\346\230\237\345\272\247\345\222\214\345\271\264\351\276\204", nullptr));
        resultLabel->setText(QCoreApplication::translate("BirthdayAstroWidget", "\347\273\223\346\236\234\345\260\206\345\234\250\346\255\244\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BirthdayAstroWidget: public Ui_BirthdayAstroWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIRTHDAYASTROWIDGET_H
