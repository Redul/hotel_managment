#include "proc.h"
#include "ui_proc.h"


Proc::Proc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proc)
{
    ui->setupUi(this);
}

Proc::~Proc() {
    delete ui;
}

void Proc::on_makeStep_clicked() {
    model.makeStep();

    if (model.getDay() > model.getPeriod()) {
        ui->day->setText("Моделирование завершено!");
        ui->makeStep->setEnabled(false);;
    } else {
        ui->day->setText(QString::fromStdString("День " + std::to_string(model.getDay()) + " из " + std::to_string(model.getPeriod())));
    }
    ui->profit->setText(QString::fromStdString(std::to_string(model.getProfit())));
    ui->all_requests->setText(QString::fromStdString(std::to_string(model.getTotalRequests())));
    ui->done_requests->setText(QString::fromStdString(std::to_string(model.getDoneRequests())));

    for (size_t i = 0; i < model.getOccupancyPercentage().size(); ++i) {
        std::string name = "percent_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QLabel* obj = findChild<QLabel*>(objName);
        obj->setText(QString::fromStdString(std::to_string(static_cast<int>(model.getOccupancyPercentage()[i])) + "%"));
    }

    for (size_t i = 0; i < model.getOccupied().size(); ++i) {
        std::string name = "occupied_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QLabel* obj = findChild<QLabel*>(objName);
        obj->setText(QString::fromStdString(std::to_string(model.getOccupied()[i])));
    }

    for (size_t i = 0; i < model.getOccupied().size(); ++i) {
        std::string name = "free_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QLabel* obj = findChild<QLabel*>(objName);
        obj->setText(QString::fromStdString(std::to_string(model.getNumberOfRooms(i) - model.getOccupied()[i])));
    }

    for (size_t i = 0; i < model.getBookings().size(); ++i) {
        std::string name = "bookings_" + std::to_string(i + 1);
        QString objName = QString::fromStdString(name);
        QLabel* obj = findChild<QLabel*>(objName);
        obj->setText(QString::fromStdString(std::to_string(model.getBookings()[i])));
    }
}

