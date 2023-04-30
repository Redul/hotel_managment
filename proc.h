#ifndef PROC_H
#define PROC_H

#include <QMainWindow>
#include <QLabel>
#include "model.h"
#include "ui_proc.h"

namespace Ui {
    class Proc;
}

class Proc : public QMainWindow {
    Q_OBJECT

public:
    Proc(QWidget *parent = nullptr);
    ~Proc();

public slots:
    void acceptArgs(int period, std::vector<int> &cnt, std::vector<int> &prices) {
        HotelSystem::Hotel hot(cnt, prices);
        model = HotelSystem::Model(period, hot);

        ui->day->setText(QString::fromStdString("День 1 из " + std::to_string(model.getPeriod())));

        for (size_t i = 0; i < cnt.size(); ++i) {
            std::string name = "free_" + std::to_string(i + 1);
            QString objName = QString::fromStdString(name);
            QLabel* obj = findChild<QLabel*>(objName);
            obj->setText(QString::fromStdString(std::to_string(cnt[i])));
        }

        for (size_t i = 0; i < prices.size(); ++i) {
            std::string name = "price_" + std::to_string(i + 1);
            QString objName = QString::fromStdString(name);
            QLabel* obj = findChild<QLabel*>(objName);
            obj->setText(QString::fromStdString(std::to_string(prices[i]) + " ₽"));
        }
    }

private slots:
    void on_makeStep_clicked();

private:
    Ui::Proc *ui;
    HotelSystem::Model model;
};

#endif // PROC_H
