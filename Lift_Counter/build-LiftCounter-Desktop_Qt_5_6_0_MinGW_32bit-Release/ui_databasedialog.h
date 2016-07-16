/********************************************************************************
** Form generated from reading UI file 'databasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEDIALOG_H
#define UI_DATABASEDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_databaseDialog
{
public:
    QGroupBox *datatbaseBox;
    QPushButton *UpDate;
    QPushButton *Save;
    QPushButton *Search;
    QPushButton *Delete;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *namelabel;
    QLineEdit *Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heightlabel;
    QLineEdit *Height;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightlabel;
    QLineEdit *Weight;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Numlabel;
    QLineEdit *LiftNum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Kglabel;
    QLineEdit *Liftweight;
    QHBoxLayout *horizontalLayout_6;
    QLabel *calorielabel;
    QLineEdit *Calories;

    void setupUi(QDialog *databaseDialog)
    {
        if (databaseDialog->objectName().isEmpty())
            databaseDialog->setObjectName(QStringLiteral("databaseDialog"));
        databaseDialog->resize(428, 323);
        datatbaseBox = new QGroupBox(databaseDialog);
        datatbaseBox->setObjectName(QStringLiteral("datatbaseBox"));
        datatbaseBox->setGeometry(QRect(50, 40, 321, 241));
        UpDate = new QPushButton(datatbaseBox);
        UpDate->setObjectName(QStringLiteral("UpDate"));
        UpDate->setGeometry(QRect(220, 170, 75, 23));
        Save = new QPushButton(datatbaseBox);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(220, 50, 75, 23));
        Search = new QPushButton(datatbaseBox);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(220, 130, 75, 23));
        Delete = new QPushButton(datatbaseBox);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(220, 90, 75, 23));
        layoutWidget = new QWidget(datatbaseBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 161, 164));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        namelabel = new QLabel(layoutWidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));

        horizontalLayout->addWidget(namelabel);

        Name = new QLineEdit(layoutWidget);
        Name->setObjectName(QStringLiteral("Name"));

        horizontalLayout->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        heightlabel = new QLabel(layoutWidget);
        heightlabel->setObjectName(QStringLiteral("heightlabel"));

        horizontalLayout_2->addWidget(heightlabel);

        Height = new QLineEdit(layoutWidget);
        Height->setObjectName(QStringLiteral("Height"));

        horizontalLayout_2->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightlabel = new QLabel(layoutWidget);
        weightlabel->setObjectName(QStringLiteral("weightlabel"));

        horizontalLayout_3->addWidget(weightlabel);

        Weight = new QLineEdit(layoutWidget);
        Weight->setObjectName(QStringLiteral("Weight"));

        horizontalLayout_3->addWidget(Weight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Numlabel = new QLabel(layoutWidget);
        Numlabel->setObjectName(QStringLiteral("Numlabel"));

        horizontalLayout_4->addWidget(Numlabel);

        LiftNum = new QLineEdit(layoutWidget);
        LiftNum->setObjectName(QStringLiteral("LiftNum"));

        horizontalLayout_4->addWidget(LiftNum);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Kglabel = new QLabel(layoutWidget);
        Kglabel->setObjectName(QStringLiteral("Kglabel"));

        horizontalLayout_5->addWidget(Kglabel);

        Liftweight = new QLineEdit(layoutWidget);
        Liftweight->setObjectName(QStringLiteral("Liftweight"));

        horizontalLayout_5->addWidget(Liftweight);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        calorielabel = new QLabel(layoutWidget);
        calorielabel->setObjectName(QStringLiteral("calorielabel"));

        horizontalLayout_6->addWidget(calorielabel);

        Calories = new QLineEdit(layoutWidget);
        Calories->setObjectName(QStringLiteral("Calories"));

        horizontalLayout_6->addWidget(Calories);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(databaseDialog);

        QMetaObject::connectSlotsByName(databaseDialog);
    } // setupUi

    void retranslateUi(QDialog *databaseDialog)
    {
        databaseDialog->setWindowTitle(QApplication::translate("databaseDialog", "Dialog", 0));
        datatbaseBox->setTitle(QApplication::translate("databaseDialog", "\346\225\260\346\215\256\345\272\223", 0));
        UpDate->setText(QApplication::translate("databaseDialog", "UpDate", 0));
        Save->setText(QApplication::translate("databaseDialog", "Save", 0));
        Search->setText(QApplication::translate("databaseDialog", "Search", 0));
        Delete->setText(QApplication::translate("databaseDialog", "Delete", 0));
        namelabel->setText(QApplication::translate("databaseDialog", "\345\247\223    \345\220\215", 0));
        heightlabel->setText(QApplication::translate("databaseDialog", "\350\272\253    \351\253\230", 0));
        weightlabel->setText(QApplication::translate("databaseDialog", "\344\275\223    \351\207\215", 0));
        Numlabel->setText(QApplication::translate("databaseDialog", "\344\270\276\351\207\215\346\254\241\346\225\260", 0));
        Kglabel->setText(QApplication::translate("databaseDialog", "\344\270\276\351\207\215\351\207\215\351\207\217", 0));
        calorielabel->setText(QApplication::translate("databaseDialog", "\346\200\273\350\277\220\345\212\250\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class databaseDialog: public Ui_databaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEDIALOG_H
