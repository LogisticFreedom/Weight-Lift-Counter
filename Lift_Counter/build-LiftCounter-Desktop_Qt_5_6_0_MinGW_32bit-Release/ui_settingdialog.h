/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingDialog
{
public:
    QGroupBox *portBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *Port;
    QLabel *label_2;
    QComboBox *BaudRate;
    QLabel *label_5;
    QComboBox *DataBits;
    QLabel *label_3;
    QComboBox *stopBits;
    QLabel *label_4;
    QComboBox *odd;
    QLabel *label_6;
    QComboBox *control;
    QPushButton *OpenButton;
    QGroupBox *sendmassageBox;
    QTextBrowser *textBrowser;
    QPushButton *sendButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *settingDialog)
    {
        if (settingDialog->objectName().isEmpty())
            settingDialog->setObjectName(QStringLiteral("settingDialog"));
        settingDialog->resize(429, 388);
        portBox = new QGroupBox(settingDialog);
        portBox->setObjectName(QStringLiteral("portBox"));
        portBox->setGeometry(QRect(40, 20, 111, 341));
        layoutWidget = new QWidget(portBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 71, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        Port = new QComboBox(layoutWidget);
        Port->setObjectName(QStringLiteral("Port"));

        verticalLayout->addWidget(Port);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        BaudRate = new QComboBox(layoutWidget);
        BaudRate->setObjectName(QStringLiteral("BaudRate"));

        verticalLayout->addWidget(BaudRate);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        DataBits = new QComboBox(layoutWidget);
        DataBits->setObjectName(QStringLiteral("DataBits"));

        verticalLayout->addWidget(DataBits);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        stopBits = new QComboBox(layoutWidget);
        stopBits->setObjectName(QStringLiteral("stopBits"));

        verticalLayout->addWidget(stopBits);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        odd = new QComboBox(layoutWidget);
        odd->setObjectName(QStringLiteral("odd"));

        verticalLayout->addWidget(odd);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        control = new QComboBox(layoutWidget);
        control->setObjectName(QStringLiteral("control"));

        verticalLayout->addWidget(control);

        OpenButton = new QPushButton(portBox);
        OpenButton->setObjectName(QStringLiteral("OpenButton"));
        OpenButton->setGeometry(QRect(20, 300, 75, 23));
        sendmassageBox = new QGroupBox(settingDialog);
        sendmassageBox->setObjectName(QStringLiteral("sendmassageBox"));
        sendmassageBox->setGeometry(QRect(170, 20, 211, 341));
        textBrowser = new QTextBrowser(sendmassageBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 140, 151, 181));
        sendButton = new QPushButton(sendmassageBox);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(100, 90, 75, 23));
        lineEdit = new QLineEdit(sendmassageBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 50, 151, 20));

        retranslateUi(settingDialog);

        QMetaObject::connectSlotsByName(settingDialog);
    } // setupUi

    void retranslateUi(QDialog *settingDialog)
    {
        settingDialog->setWindowTitle(QApplication::translate("settingDialog", "Dialog", 0));
        portBox->setTitle(QApplication::translate("settingDialog", "\344\270\262\345\217\243", 0));
        label->setText(QApplication::translate("settingDialog", "\344\270\262\345\217\243\345\217\267", 0));
        Port->clear();
        Port->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "COM1", 0)
         << QApplication::translate("settingDialog", "COM2", 0)
         << QApplication::translate("settingDialog", "COM3", 0)
         << QApplication::translate("settingDialog", "COM4", 0)
         << QApplication::translate("settingDialog", "COM5", 0)
         << QApplication::translate("settingDialog", "COM6", 0)
         << QApplication::translate("settingDialog", "COM7", 0)
         << QApplication::translate("settingDialog", "COM8", 0)
        );
        label_2->setText(QApplication::translate("settingDialog", "\346\263\242\347\211\271\347\216\207", 0));
        BaudRate->clear();
        BaudRate->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "115200", 0)
         << QApplication::translate("settingDialog", "9600", 0)
        );
        label_5->setText(QApplication::translate("settingDialog", "\346\225\260\346\215\256\344\275\215", 0));
        DataBits->clear();
        DataBits->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "8", 0)
         << QApplication::translate("settingDialog", "7", 0)
        );
        label_3->setText(QApplication::translate("settingDialog", "\345\201\234\346\255\242\344\275\215", 0));
        stopBits->clear();
        stopBits->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "1", 0)
         << QApplication::translate("settingDialog", "2", 0)
        );
        label_4->setText(QApplication::translate("settingDialog", "\345\245\207\345\201\266\346\240\241\351\252\214", 0));
        odd->clear();
        odd->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "None", 0)
         << QApplication::translate("settingDialog", "Odd", 0)
         << QApplication::translate("settingDialog", "Even", 0)
        );
        label_6->setText(QApplication::translate("settingDialog", "\346\265\201\346\216\247", 0));
        control->clear();
        control->insertItems(0, QStringList()
         << QApplication::translate("settingDialog", "None", 0)
         << QApplication::translate("settingDialog", "Apply", 0)
        );
        OpenButton->setText(QApplication::translate("settingDialog", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        sendmassageBox->setTitle(QApplication::translate("settingDialog", "\345\217\221\351\200\201", 0));
        sendButton->setText(QApplication::translate("settingDialog", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class settingDialog: public Ui_settingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
