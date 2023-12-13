#include "mainwindow.h"
#include "ui_QListView.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->aDirList = new QFileInfoList();

        this->model = new QListViewExplorerModel();

        this->model->getFolderList(".",this->aDirList);

        this->ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

