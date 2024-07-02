/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *boldButton;
    QPushButton *unboldButton;
    QPushButton *superscriptButton;
    QPushButton *subscriptButton;
    QPushButton *aboutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName("vboxLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        vboxLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        boldButton = new QPushButton(centralwidget);
        boldButton->setObjectName("boldButton");

        horizontalLayout->addWidget(boldButton);

        unboldButton = new QPushButton(centralwidget);
        unboldButton->setObjectName("unboldButton");

        horizontalLayout->addWidget(unboldButton);

        superscriptButton = new QPushButton(centralwidget);
        superscriptButton->setObjectName("superscriptButton");

        horizontalLayout->addWidget(superscriptButton);

        subscriptButton = new QPushButton(centralwidget);
        subscriptButton->setObjectName("subscriptButton");

        horizontalLayout->addWidget(subscriptButton);

        aboutButton = new QPushButton(centralwidget);
        aboutButton->setObjectName("aboutButton");

        horizontalLayout->addWidget(aboutButton);


        vboxLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Text Editor", nullptr));
        boldButton->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        unboldButton->setText(QCoreApplication::translate("MainWindow", "Unbold", nullptr));
        superscriptButton->setText(QCoreApplication::translate("MainWindow", "Superscript", nullptr));
        subscriptButton->setText(QCoreApplication::translate("MainWindow", "Subscript", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "About Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
