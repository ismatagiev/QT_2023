#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    secundomer = new Clock(100, 2, true, this);
    secundomer->show();
    secundomer->startTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

