#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getNums();
    void putResult(int num);

private slots:
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_divButton_clicked();
    void on_mulButton_clicked();

private:
    Ui::MainWindow *ui;
    int num1, num2;
};
#endif // MAINWINDOW_H
