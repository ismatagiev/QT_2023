#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    weatherData = new WeatherData();

    current = new CurrentConditionsDisplay(weatherData);
    current->setGeometry(50,50, 600,800);
    current->show();
    current->display();

    weatherData->setMeasurements(-4, 75, 760);
}

MainWindow::~MainWindow()
{
    delete ui;
}

