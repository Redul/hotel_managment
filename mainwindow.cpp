#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QObject>
#include <QString>
#include <QSpinBox>
#include <vector>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
    delete window;
}

void MainWindow::on_start_clicked() {
    int period = ui->period->value();
    std::vector<int> cnt(5, 0), prices(5, 0);
    int sum_cnt = 0;
    for (size_t i = 0; i < cnt.size(); ++i) {
        std::string name = "cnt_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QSpinBox* obj = findChild<QSpinBox*>(objName);
        cnt[i] = obj->value();
        sum_cnt += cnt[i];
    }

    for (size_t i = 0; i < prices.size(); ++i) {
        std::string name = "price_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QSpinBox* obj = findChild<QSpinBox*>(objName);
        prices[i] = obj->value();
    }

    if (ui->rooms_cnt->value() != sum_cnt) {
        QMessageBox::critical(this, "Ошибка", "Кол-во всех номеров не совпадает с суммарным");
    } else {
        window = new Proc(this);

        connect(this, &MainWindow::passArgs, window, &Proc::acceptArgs);
        emit passArgs(period, cnt, prices);
        close();
        window->show();
    }
}
