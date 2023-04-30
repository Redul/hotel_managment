/********************************************************************************
** Form generated from reading UI file 'proc.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROC_H
#define UI_PROC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proc
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QLabel *day;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QPushButton *makeStep;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_7;
    QLabel *bookings_1;
    QLabel *free_1;
    QLabel *price_4;
    QLabel *occupied_3;
    QLabel *bookings_3;
    QLabel *bookings_5;
    QLabel *percent;
    QLabel *percent_2;
    QLabel *occupied_1;
    QLabel *percent_4;
    QLabel *type_3;
    QLabel *type_1;
    QLabel *free;
    QLabel *occupied_5;
    QLabel *bookings;
    QLabel *percent_5;
    QSpacerItem *verticalSpacer_5;
    QLabel *price_2;
    QLabel *type_2;
    QLabel *free_4;
    QLabel *free_5;
    QLabel *occupied;
    QSpacerItem *verticalSpacer_6;
    QLabel *price_1;
    QLabel *price_5;
    QLabel *percent_1;
    QLabel *price_3;
    QLabel *percent_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *type_4;
    QLabel *free_2;
    QLabel *bookings_2;
    QLabel *price;
    QLabel *type_5;
    QLabel *occupied_2;
    QLabel *bookings_4;
    QLabel *occupied_4;
    QLabel *free_3;
    QSpacerItem *verticalSpacer_8;
    QGridLayout *gridLayout_4;
    QLabel *done_requests;
    QGridLayout *gridLayout_2;
    QLabel *profit;
    QLabel *rub;
    QLabel *all_requests;
    QLabel *prof;
    QLabel *all_req;
    QLabel *done_req;
    QLabel *stat;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *Proc)
    {
        if (Proc->objectName().isEmpty())
            Proc->setObjectName("Proc");
        Proc->resize(886, 805);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Proc->sizePolicy().hasHeightForWidth());
        Proc->setSizePolicy(sizePolicy);
        Proc->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(Proc);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName("gridLayout_5");
        day = new QLabel(centralwidget);
        day->setObjectName("day");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        day->setFont(font);
        day->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(day, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        makeStep = new QPushButton(centralwidget);
        makeStep->setObjectName("makeStep");
        makeStep->setCheckable(false);
        makeStep->setChecked(false);
        makeStep->setAutoRepeat(false);

        gridLayout_3->addWidget(makeStep, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 6, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 9, 0, 1, 1);

        bookings_1 = new QLabel(centralwidget);
        bookings_1->setObjectName("bookings_1");
        bookings_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bookings_1, 8, 1, 1, 1);

        free_1 = new QLabel(centralwidget);
        free_1->setObjectName("free_1");
        free_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(free_1, 6, 1, 1, 1);

        price_4 = new QLabel(centralwidget);
        price_4->setObjectName("price_4");
        price_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(price_4, 2, 4, 1, 1);

        occupied_3 = new QLabel(centralwidget);
        occupied_3->setObjectName("occupied_3");
        occupied_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(occupied_3, 4, 3, 1, 1);

        bookings_3 = new QLabel(centralwidget);
        bookings_3->setObjectName("bookings_3");
        bookings_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bookings_3, 8, 3, 1, 1);

        bookings_5 = new QLabel(centralwidget);
        bookings_5->setObjectName("bookings_5");
        bookings_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bookings_5, 8, 5, 1, 1);

        percent = new QLabel(centralwidget);
        percent->setObjectName("percent");

        gridLayout->addWidget(percent, 10, 0, 1, 1);

        percent_2 = new QLabel(centralwidget);
        percent_2->setObjectName("percent_2");
        percent_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(percent_2, 10, 2, 1, 1);

        occupied_1 = new QLabel(centralwidget);
        occupied_1->setObjectName("occupied_1");
        occupied_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(occupied_1, 4, 1, 1, 1);

        percent_4 = new QLabel(centralwidget);
        percent_4->setObjectName("percent_4");
        percent_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(percent_4, 10, 4, 1, 1);

        type_3 = new QLabel(centralwidget);
        type_3->setObjectName("type_3");
        type_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(type_3, 0, 3, 1, 1);

        type_1 = new QLabel(centralwidget);
        type_1->setObjectName("type_1");
        type_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(type_1, 0, 1, 1, 1);

        free = new QLabel(centralwidget);
        free->setObjectName("free");

        gridLayout->addWidget(free, 6, 0, 1, 1);

        occupied_5 = new QLabel(centralwidget);
        occupied_5->setObjectName("occupied_5");
        occupied_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(occupied_5, 4, 5, 1, 1);

        bookings = new QLabel(centralwidget);
        bookings->setObjectName("bookings");

        gridLayout->addWidget(bookings, 8, 0, 1, 1);

        percent_5 = new QLabel(centralwidget);
        percent_5->setObjectName("percent_5");
        percent_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(percent_5, 10, 5, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 1);

        price_2 = new QLabel(centralwidget);
        price_2->setObjectName("price_2");
        price_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(price_2, 2, 2, 1, 1);

        type_2 = new QLabel(centralwidget);
        type_2->setObjectName("type_2");
        type_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(type_2, 0, 2, 1, 1);

        free_4 = new QLabel(centralwidget);
        free_4->setObjectName("free_4");
        free_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(free_4, 6, 4, 1, 1);

        free_5 = new QLabel(centralwidget);
        free_5->setObjectName("free_5");
        free_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(free_5, 6, 5, 1, 1);

        occupied = new QLabel(centralwidget);
        occupied->setObjectName("occupied");

        gridLayout->addWidget(occupied, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 0, 1, 1);

        price_1 = new QLabel(centralwidget);
        price_1->setObjectName("price_1");
        price_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(price_1, 2, 1, 1, 1);

        price_5 = new QLabel(centralwidget);
        price_5->setObjectName("price_5");
        price_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(price_5, 2, 5, 1, 1);

        percent_1 = new QLabel(centralwidget);
        percent_1->setObjectName("percent_1");
        percent_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(percent_1, 10, 1, 1, 1);

        price_3 = new QLabel(centralwidget);
        price_3->setObjectName("price_3");
        price_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(price_3, 2, 3, 1, 1);

        percent_3 = new QLabel(centralwidget);
        percent_3->setObjectName("percent_3");
        percent_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(percent_3, 10, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 0, 1, 1);

        type_4 = new QLabel(centralwidget);
        type_4->setObjectName("type_4");
        type_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(type_4, 0, 4, 1, 1);

        free_2 = new QLabel(centralwidget);
        free_2->setObjectName("free_2");
        free_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(free_2, 6, 2, 1, 1);

        bookings_2 = new QLabel(centralwidget);
        bookings_2->setObjectName("bookings_2");
        bookings_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bookings_2, 8, 2, 1, 1);

        price = new QLabel(centralwidget);
        price->setObjectName("price");

        gridLayout->addWidget(price, 2, 0, 1, 1);

        type_5 = new QLabel(centralwidget);
        type_5->setObjectName("type_5");
        type_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(type_5, 0, 5, 1, 1);

        occupied_2 = new QLabel(centralwidget);
        occupied_2->setObjectName("occupied_2");
        occupied_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(occupied_2, 4, 2, 1, 1);

        bookings_4 = new QLabel(centralwidget);
        bookings_4->setObjectName("bookings_4");
        bookings_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bookings_4, 8, 4, 1, 1);

        occupied_4 = new QLabel(centralwidget);
        occupied_4->setObjectName("occupied_4");
        occupied_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(occupied_4, 4, 4, 1, 1);

        free_3 = new QLabel(centralwidget);
        free_3->setObjectName("free_3");
        free_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(free_3, 6, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 4, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        done_requests = new QLabel(centralwidget);
        done_requests->setObjectName("done_requests");
        done_requests->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(done_requests, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        profit = new QLabel(centralwidget);
        profit->setObjectName("profit");
        profit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(profit, 0, 0, 1, 1);

        rub = new QLabel(centralwidget);
        rub->setObjectName("rub");

        gridLayout_2->addWidget(rub, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 3, 1, 1, 1);

        all_requests = new QLabel(centralwidget);
        all_requests->setObjectName("all_requests");
        all_requests->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(all_requests, 1, 1, 1, 1);

        prof = new QLabel(centralwidget);
        prof->setObjectName("prof");

        gridLayout_4->addWidget(prof, 3, 0, 1, 1);

        all_req = new QLabel(centralwidget);
        all_req->setObjectName("all_req");

        gridLayout_4->addWidget(all_req, 1, 0, 1, 1);

        done_req = new QLabel(centralwidget);
        done_req->setObjectName("done_req");

        gridLayout_4->addWidget(done_req, 2, 0, 1, 1);

        stat = new QLabel(centralwidget);
        stat->setObjectName("stat");

        gridLayout_4->addWidget(stat, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_3, 5, 0, 1, 1);

        Proc->setCentralWidget(centralwidget);

        retranslateUi(Proc);

        QMetaObject::connectSlotsByName(Proc);
    } // setupUi

    void retranslateUi(QMainWindow *Proc)
    {
        Proc->setWindowTitle(QCoreApplication::translate("Proc", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\263\320\276\321\201\321\202\320\270\320\275\320\270\321\206\320\265\320\271", nullptr));
        day->setText(QCoreApplication::translate("Proc", "\320\224\320\265\320\275\321\214 1 \320\270\320\267 ...", nullptr));
        makeStep->setText(QCoreApplication::translate("Proc", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\264\320\265\320\275\321\214", nullptr));
        bookings_1->setText(QCoreApplication::translate("Proc", "0", nullptr));
        free_1->setText(QCoreApplication::translate("Proc", "0", nullptr));
        price_4->setText(QCoreApplication::translate("Proc", "0", nullptr));
        occupied_3->setText(QCoreApplication::translate("Proc", "0", nullptr));
        bookings_3->setText(QCoreApplication::translate("Proc", "0", nullptr));
        bookings_5->setText(QCoreApplication::translate("Proc", "0", nullptr));
        percent->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\227\320\260\320\263\321\200\321\203\320\266\320\265\320\275\320\275\320\276\321\201\321\202\321\214<br/>\320\275\320\276\320\274\320\265\321\200\320\276\320\262</p></body></html>", nullptr));
        percent_2->setText(QCoreApplication::translate("Proc", "0", nullptr));
        occupied_1->setText(QCoreApplication::translate("Proc", "0", nullptr));
        percent_4->setText(QCoreApplication::translate("Proc", "0", nullptr));
        type_3->setText(QCoreApplication::translate("Proc", "\320\224\320\262\321\203\320\274\320\265\321\201\321\202\320\275\321\213\320\271", nullptr));
        type_1->setText(QCoreApplication::translate("Proc", "\320\236\320\264\320\275\320\276\320\274\320\265\321\201\321\202\320\275\321\213\320\271", nullptr));
        free->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\276 <br/>\320\275\320\276\320\274\320\265\321\200\320\276\320\262</p></body></html>", nullptr));
        occupied_5->setText(QCoreApplication::translate("Proc", "0", nullptr));
        bookings->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\232\320\276\320\273-\320\262\320\276 <br/>\320\261\321\200\320\276\320\275\320\265\320\271</p></body></html>", nullptr));
        percent_5->setText(QCoreApplication::translate("Proc", "0", nullptr));
        price_2->setText(QCoreApplication::translate("Proc", "0", nullptr));
        type_2->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\224\320\262\321\203\320\274\320\265\321\201\321\202\320\275\321\213\320\271<br/>(\321\201 \320\264\320\270\320\262\320\260\320\275\320\276\320\274)</p></body></html>", nullptr));
        free_4->setText(QCoreApplication::translate("Proc", "0", nullptr));
        free_5->setText(QCoreApplication::translate("Proc", "0", nullptr));
        occupied->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\227\320\260\320\275\321\217\321\202\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262</p></body></html>", nullptr));
        price_1->setText(QCoreApplication::translate("Proc", "0", nullptr));
        price_5->setText(QCoreApplication::translate("Proc", "0", nullptr));
        percent_1->setText(QCoreApplication::translate("Proc", "0", nullptr));
        price_3->setText(QCoreApplication::translate("Proc", "0", nullptr));
        percent_3->setText(QCoreApplication::translate("Proc", "0", nullptr));
        type_4->setText(QCoreApplication::translate("Proc", "\320\237\320\276\320\273\321\203\320\273\321\216\320\272\321\201", nullptr));
        free_2->setText(QCoreApplication::translate("Proc", "0", nullptr));
        bookings_2->setText(QCoreApplication::translate("Proc", "0", nullptr));
        price->setText(QCoreApplication::translate("Proc", "\320\246\320\265\320\275\320\260", nullptr));
        type_5->setText(QCoreApplication::translate("Proc", "\320\233\321\216\320\272\321\201", nullptr));
        occupied_2->setText(QCoreApplication::translate("Proc", "0", nullptr));
        bookings_4->setText(QCoreApplication::translate("Proc", "0", nullptr));
        occupied_4->setText(QCoreApplication::translate("Proc", "0", nullptr));
        free_3->setText(QCoreApplication::translate("Proc", "0", nullptr));
        done_requests->setText(QCoreApplication::translate("Proc", "0", nullptr));
        profit->setText(QCoreApplication::translate("Proc", "0", nullptr));
        rub->setText(QCoreApplication::translate("Proc", "\342\202\275", nullptr));
        all_requests->setText(QCoreApplication::translate("Proc", "0", nullptr));
        prof->setText(QCoreApplication::translate("Proc", "\320\237\321\200\320\270\320\261\321\213\320\273\321\214", nullptr));
        all_req->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\222\321\201\320\265\320\263\320\276 \320\267\320\260\321\217\320\262\320\276\320\272</p></body></html>", nullptr));
        done_req->setText(QCoreApplication::translate("Proc", "<html><head/><body><p>\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276 <br/>\320\267\320\260\321\217\320\262\320\276\320\272</p></body></html>", nullptr));
        stat->setText(QCoreApplication::translate("Proc", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\236\320\261\321\211\320\260\321\217 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proc: public Ui_Proc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROC_H
