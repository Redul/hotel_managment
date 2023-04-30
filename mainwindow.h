
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "proc.h"


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

private slots:
    void on_start_clicked();

signals:
    void passArgs(int period, std::vector<int> &cnt, std::vector<int> &prices);

private:
    Ui::MainWindow *ui;
    Proc *window;
};

#endif // MAINWINDOW_H
