#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_mainSearchPB_clicked()
{
    QString searchToken = ui->urlLineEdit->text();
    urlToken.setUrl(searchToken);
    ui->webRenderView->setUrl(urlToken);
}
