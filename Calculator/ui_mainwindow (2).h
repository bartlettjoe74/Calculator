/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *currentNumberLabel;
    QPushButton *clearButton;
    QPushButton *button3;
    QPushButton *button8;
    QPushButton *button5;
    QPushButton *button2;
    QPushButton *button0;
    QPushButton *button7;
    QPushButton *button4;
    QPushButton *button1;
    QPushButton *subtractButton;
    QPushButton *addButton;
    QPushButton *multiplyButton;
    QPushButton *divideButton;
    QPushButton *button6;
    QPushButton *button9;
    QPushButton *equalsButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(503, 571);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        currentNumberLabel = new QLabel(centralWidget);
        currentNumberLabel->setObjectName(QStringLiteral("currentNumberLabel"));
        currentNumberLabel->setGeometry(QRect(10, 10, 481, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(false);
        font.setWeight(50);
        currentNumberLabel->setFont(font);
        currentNumberLabel->setFrameShape(QFrame::Box);
        currentNumberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(10, 100, 361, 81));
        QFont font1;
        font1.setPointSize(25);
        clearButton->setFont(font1);
        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(250, 180, 121, 81));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(false);
        font2.setWeight(50);
        button3->setFont(font2);
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(130, 340, 121, 81));
        button8->setFont(font2);
        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(130, 260, 121, 81));
        button5->setFont(font2);
        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(130, 180, 121, 81));
        button2->setFont(font2);
        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(10, 420, 361, 81));
        button0->setFont(font2);
        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(10, 340, 121, 81));
        button7->setFont(font2);
        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(10, 260, 121, 81));
        button4->setFont(font2);
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(10, 180, 121, 81));
        button1->setFont(font2);
        subtractButton = new QPushButton(centralWidget);
        subtractButton->setObjectName(QStringLiteral("subtractButton"));
        subtractButton->setGeometry(QRect(370, 260, 121, 81));
        subtractButton->setFont(font1);
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(370, 340, 121, 81));
        addButton->setFont(font1);
        multiplyButton = new QPushButton(centralWidget);
        multiplyButton->setObjectName(QStringLiteral("multiplyButton"));
        multiplyButton->setGeometry(QRect(370, 180, 121, 81));
        multiplyButton->setFont(font1);
        divideButton = new QPushButton(centralWidget);
        divideButton->setObjectName(QStringLiteral("divideButton"));
        divideButton->setGeometry(QRect(370, 100, 121, 81));
        divideButton->setFont(font1);
        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(250, 260, 121, 81));
        button6->setFont(font2);
        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(250, 340, 121, 81));
        button9->setFont(font2);
        equalsButton = new QPushButton(centralWidget);
        equalsButton->setObjectName(QStringLiteral("equalsButton"));
        equalsButton->setGeometry(QRect(370, 420, 121, 81));
        equalsButton->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        currentNumberLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "C", nullptr));
        button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        subtractButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        multiplyButton->setText(QApplication::translate("MainWindow", "x", nullptr));
        divideButton->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
        button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        equalsButton->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
