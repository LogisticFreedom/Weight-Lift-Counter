/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenAction;
    QAction *CloseAction;
    QAction *SaveAction;
    QAction *ClearAction;
    QAction *ExitAction;
    QWidget *centralWidget;
    QGroupBox *sportBox;
    QLabel *label_9;
    QLabel *label_8;
    QLCDNumber *lcdNumber_2;
    QLineEdit *weightBox;
    QLCDNumber *lcdNumber;
    QLabel *label_7;
    QLabel *timelabel;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_C;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(460, 460);
        OpenAction = new QAction(MainWindow);
        OpenAction->setObjectName(QStringLiteral("OpenAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/src/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenAction->setIcon(icon);
        CloseAction = new QAction(MainWindow);
        CloseAction->setObjectName(QStringLiteral("CloseAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/src/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        CloseAction->setIcon(icon1);
        SaveAction = new QAction(MainWindow);
        SaveAction->setObjectName(QStringLiteral("SaveAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/src/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAction->setIcon(icon2);
        ClearAction = new QAction(MainWindow);
        ClearAction->setObjectName(QStringLiteral("ClearAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/src/cleanport.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClearAction->setIcon(icon3);
        ExitAction = new QAction(MainWindow);
        ExitAction->setObjectName(QStringLiteral("ExitAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/src/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExitAction->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sportBox = new QGroupBox(centralWidget);
        sportBox->setObjectName(QStringLiteral("sportBox"));
        sportBox->setGeometry(QRect(30, 50, 391, 311));
        label_9 = new QLabel(sportBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 240, 54, 12));
        label_8 = new QLabel(sportBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 150, 54, 12));
        lcdNumber_2 = new QLCDNumber(sportBox);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(130, 210, 201, 71));
        weightBox = new QLineEdit(sportBox);
        weightBox->setObjectName(QStringLiteral("weightBox"));
        weightBox->setGeometry(QRect(130, 50, 201, 31));
        lcdNumber = new QLCDNumber(sportBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(130, 120, 201, 71));
        label_7 = new QLabel(sportBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 60, 54, 12));
        timelabel = new QLabel(centralWidget);
        timelabel->setObjectName(QStringLiteral("timelabel"));
        timelabel->setGeometry(QRect(250, 10, 211, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 111, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 23));
        menu_C = new QMenu(menuBar);
        menu_C->setObjectName(QStringLiteral("menu_C"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_C->menuAction());
        menu_C->addAction(OpenAction);
        menu_C->addAction(CloseAction);
        menu_C->addAction(SaveAction);
        menu_C->addAction(ClearAction);
        menu_C->addAction(ExitAction);
        mainToolBar->addAction(OpenAction);
        mainToolBar->addAction(CloseAction);
        mainToolBar->addAction(SaveAction);
        mainToolBar->addAction(ClearAction);
        mainToolBar->addAction(ExitAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        OpenAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        CloseAction->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        SaveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", 0));
        ClearAction->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\350\256\260\345\275\225", 0));
        ExitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
        sportBox->setTitle(QApplication::translate("MainWindow", "\350\277\220\345\212\250", 0));
        label_9->setText(QApplication::translate("MainWindow", "\350\277\220\345\212\250\351\207\217/\345\215\241", 0));
        label_8->setText(QApplication::translate("MainWindow", "\346\254\241\346\225\260/\346\254\241", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\207\215\351\207\217/kg", 0));
        timelabel->setText(QApplication::translate("MainWindow", "time", 0));
        label->setText(QApplication::translate("MainWindow", "\346\202\250\345\245\275\357\274\201", 0));
        menu_C->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234(&C)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
