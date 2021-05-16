#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWebPage *page = ui->webRenderView->page();
    QWebSettings *settings = page->settings();
    settings->setAttribute(QWebSettings::JavascriptEnabled, true);
    settings->setAttribute(QWebSettings::PluginsEnabled, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_mainSearchPB_clicked()
{
    QString searchToken = ui->urlLineEdit->currentText();
    urlToken.clear();
    urlToken.setUrl(searchToken);
    ui->webRenderView->load(urlToken);
}
