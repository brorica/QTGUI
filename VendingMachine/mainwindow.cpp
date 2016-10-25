#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_Add100won_clicked()
{
    if((money+100) >= 5000)
        ui->MoneyStatus->setNum(money=5000);

    else
        ui->MoneyStatus->setNum(money+=100);
}

void MainWindow::on_Add500won_clicked()
{
    if((money+500) >= 5000)
        ui->MoneyStatus->setNum(money=5000);

    else
        ui->MoneyStatus->setNum(money+=500);
}

void MainWindow::on_spen100_clicked()
{
    if(money<150)
        return;
    ui->MoneyStatus->setNum(money-=150);
}

void MainWindow::on_spen200_clicked()
{
    if(money<200)
        return;
    ui->MoneyStatus->setNum(money-=200);
}

void MainWindow::on_spend500_clicked()
{
    if(money<500)
        return;
    ui->MoneyStatus->setNum(money-=500);
}
