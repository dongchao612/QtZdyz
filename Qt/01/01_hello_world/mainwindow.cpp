#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);// 界面初始化。
}

MainWindow::~MainWindow()
{
    delete ui;// 析构函数里 delete 掉 ui。
}

