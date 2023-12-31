#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /* 设置位置与大小 */
    this->setGeometry(0, 0, 800, 480);

    /*实例化对象，传入当前日期与时间*/
    dateTimeEdit = new QDateTimeEdit(QDateTime::currentDateTime(), this);
    dateTimeEdit->setGeometry(300, 200, 200, 30);
    /* 弹出日期控件与否 */
    dateTimeEdit->setCalendarPopup(false);

    /* 实例化对象，传入当前时间 */
    timeEdit = new QTimeEdit(QTime::currentTime(), this);
    timeEdit->setGeometry(300, 240, 200, 30);

    /* 实例化对象，传入当前日期 */
    dateEdit = new QDateEdit(QDate::currentDate(), this);
    dateEdit->setGeometry(300, 280, 200, 30);

    connect(dateTimeEdit, &QDateTimeEdit::dateTimeChanged, this, &MainWindow::dateTimeEditDateTimeChanged);
    connect(dateEdit, &QDateEdit::dateChanged, this, &MainWindow::dateEditDateChanged);
    connect(timeEdit, &QTimeEdit::timeChanged, this, &MainWindow::timeEditTimeChanged);
}

MainWindow::~MainWindow()
{
}

void MainWindow::dateTimeEditDateTimeChanged(const QDateTime &dateTime)
{
    qDebug() << dateTime.toString();
}

void MainWindow::dateEditDateChanged(const QDate &date)
{
    qDebug() << date.toString();
}

void MainWindow::timeEditTimeChanged(const QTime &time)
{
    qDebug() << time.toString();
}



