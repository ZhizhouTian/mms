#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pcdmiswindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    pcdmiswindow *pcw = new pcdmiswindow;
    pcw->show();
}
