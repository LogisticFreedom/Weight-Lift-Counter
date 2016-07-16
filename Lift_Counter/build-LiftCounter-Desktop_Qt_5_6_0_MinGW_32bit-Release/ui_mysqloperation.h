/********************************************************************************
** Form generated from reading UI file 'mysqloperation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSQLOPERATION_H
#define UI_MYSQLOPERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mysqloperation
{
public:
    QGroupBox *databaseBox;
    QPushButton *Delete;
    QPushButton *Search;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Height;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Weight;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *LiftNum;
    QPushButton *UpDate;
    QPushButton *Save;

    void setupUi(QDialog *Mysqloperation)
    {
        if (Mysqloperation->objectName().isEmpty())
            Mysqloperation->setObjectName(QStringLiteral("Mysqloperation"));
        Mysqloperation->resize(404, 383);
        databaseBox = new QGroupBox(Mysqloperation);
        databaseBox->setObjectName(QStringLiteral("databaseBox"));
        databaseBox->setGeometry(QRect(40, 30, 321, 351));
        Delete = new QPushButton(databaseBox);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(220, 150, 75, 23));
        Search = new QPushButton(databaseBox);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(220, 190, 75, 23));
        layoutWidget = new QWidget(databaseBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 167, 246));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Name = new QLineEdit(layoutWidget);
        Name->setObjectName(QStringLiteral("Name"));

        horizontalLayout->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Height = new QLineEdit(layoutWidget);
        Height->setObjectName(QStringLiteral("Height"));

        horizontalLayout_2->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Weight = new QLineEdit(layoutWidget);
        Weight->setObjectName(QStringLiteral("Weight"));

        horizontalLayout_3->addWidget(Weight);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        LiftNum = new QLineEdit(layoutWidget);
        LiftNum->setObjectName(QStringLiteral("LiftNum"));

        horizontalLayout_4->addWidget(LiftNum);


        verticalLayout->addLayout(horizontalLayout_4);

        UpDate = new QPushButton(databaseBox);
        UpDate->setObjectName(QStringLiteral("UpDate"));
        UpDate->setGeometry(QRect(220, 230, 75, 23));
        Save = new QPushButton(databaseBox);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(220, 110, 75, 23));

        retranslateUi(Mysqloperation);

        QMetaObject::connectSlotsByName(Mysqloperation);
    } // setupUi

    void retranslateUi(QDialog *Mysqloperation)
    {
        Mysqloperation->setWindowTitle(QApplication::translate("Mysqloperation", "Dialog", 0));
        databaseBox->setTitle(QApplication::translate("Mysqloperation", "\346\225\260\346\215\256\345\272\223", 0));
        Delete->setText(QApplication::translate("Mysqloperation", "delete", 0));
        Search->setText(QApplication::translate("Mysqloperation", "Search", 0));
        label->setText(QApplication::translate("Mysqloperation", "\345\247\223\345\220\215", 0));
        label_2->setText(QApplication::translate("Mysqloperation", "\350\272\253\351\253\230", 0));
        label_3->setText(QApplication::translate("Mysqloperation", "\344\275\223\351\207\215", 0));
        label_4->setText(QApplication::translate("Mysqloperation", "\346\254\241\346\225\260", 0));
        UpDate->setText(QApplication::translate("Mysqloperation", "UpDate", 0));
        Save->setText(QApplication::translate("Mysqloperation", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class Mysqloperation: public Ui_Mysqloperation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSQLOPERATION_H
