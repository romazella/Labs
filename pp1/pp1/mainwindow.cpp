#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>


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

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())//если глупа€
    {

    }


    if(ui->radioButton_2->isChecked())//если гномь€
    {

    }
    if(ui->radioButton_3->isChecked())//если нисход€ща€
    {

    }
    if(ui->radioButton_4->isChecked())//если восход€ща€
    {

    }
}
