#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int money = 1000;

private slots:
    void on_Add100won_clicked();

    void on_Add500won_clicked();

    void on_spen100_clicked();

    void on_spen200_clicked();

    void on_spend500_clicked();

    void on_MoneyStatus_setText();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
