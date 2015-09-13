#include "pcdmiswindow.h"
#include "ui_pcdmiswindow.h"

pcdmiswindow::pcdmiswindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pcdmiswindow)
{
    ui->setupUi(this);
}

pcdmiswindow::~pcdmiswindow()
{
    delete ui;
}
