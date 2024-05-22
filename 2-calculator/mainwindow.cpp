#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::getNums() {
    num1 = ui->txtNum1->text().toInt();
    num2 = ui->txtNum2->text().toInt();
}

void MainWindow::putResult(int num) {
    ui->txtResult->setText(QString::number(num));
}

void MainWindow::on_plusButton_clicked() {
    getNums();
    putResult(num1 + num2);
}

void MainWindow::on_minusButton_clicked() {
    getNums();
    putResult(num1 - num2);
}

void MainWindow::on_divButton_clicked() {
    getNums();
    putResult(num1 / num2);
}

void MainWindow::on_mulButton_clicked() {
    getNums();
    putResult(num1 * num2);
}
