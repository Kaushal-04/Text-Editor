#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCharFormat>
#include <QTextCursor>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->boldButton, &QPushButton::clicked, this, &MainWindow::makeBold);
    connect(ui->unboldButton, &QPushButton::clicked, this, &MainWindow::makeUnbold);
    connect(ui->superscriptButton, &QPushButton::clicked, this, &MainWindow::makeSuperscript);
    connect(ui->subscriptButton, &QPushButton::clicked, this, &MainWindow::makeSubscript);
    connect(ui->aboutButton, &QPushButton::clicked, this, &MainWindow::showAbout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeBold()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (!cursor.hasSelection())
        return;

    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    cursor.mergeCharFormat(format);
}

void MainWindow::makeUnbold()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (!cursor.hasSelection())
        return;

    QTextCharFormat format;
    format.setFontWeight(QFont::Normal);
    cursor.mergeCharFormat(format);
}

void MainWindow::makeSuperscript()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (!cursor.hasSelection())
        return;

    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    cursor.mergeCharFormat(format);
}

void MainWindow::makeSubscript()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (!cursor.hasSelection())
        return;

    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    cursor.mergeCharFormat(format);
}

void MainWindow::showAbout()
{
    QString aboutText = R"(
    <h2>About Me</h2>
    <p><b>Name:</b> Kaushal Kumar</p>
    <p><b>Education:</b></p>
    B.Tech in Computer Science and Engineering<br>
    Jaypee University of Engineering and Technology, 2022 - 2026<br>
    Current CGPA: 8.2/10<br>
    Cureent Sem : 5th
    <p><b>Experience:</b></p>
    Organization : National Institute of Technology, Rourkela<br>
    Role : Internship<br>
    Status : Continue<br>
    Period : 16 May , 2024 - 07 July , 2024<br>
    Project : Game theoretical implementation of Eigen decomposition & Stochastic in C++.
    <p><b>Technical Skills:</b></p>
    Languages: C, C++, Python,Java<br>
    Tools & Software: Git, GitHub, Android Studio<br>
    Database: SQL Databases<br>
    Development: Android Development<br>
    Backend: Java<br>
    Frontend: Tkinter , XML , HTML & CSS
    )";

    QMessageBox aboutBox;
    aboutBox.setText(aboutText);
    aboutBox.exec();
}
