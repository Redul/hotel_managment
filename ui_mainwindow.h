/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QSpinBox *period;
    QLabel *label;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QSpinBox *rooms_cnt;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QGridLayout *gridLayout_3;
    QSpinBox *price_1;
    QSpinBox *price_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QSpinBox *cnt_3;
    QSpinBox *price_3;
    QSpinBox *cnt_5;
    QLabel *label_5;
    QSpinBox *cnt_2;
    QSpinBox *price_5;
    QSpinBox *price_4;
    QSpinBox *cnt_4;
    QLabel *label_3;
    QSpinBox *cnt_1;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_2;
    QPushButton *start;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(644, 504);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        period = new QSpinBox(centralwidget);
        period->setObjectName("period");
        period->setMinimum(12);
        period->setMaximum(30);

        gridLayout_2->addWidget(period, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        rooms_cnt = new QSpinBox(centralwidget);
        rooms_cnt->setObjectName("rooms_cnt");
        rooms_cnt->setMinimum(20);
        rooms_cnt->setMaximum(30);

        gridLayout_4->addWidget(rooms_cnt, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 0, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        price_1 = new QSpinBox(centralwidget);
        price_1->setObjectName("price_1");
        price_1->setMaximum(100000);
        price_1->setSingleStep(1000);

        gridLayout_3->addWidget(price_1, 0, 2, 1, 1);

        price_2 = new QSpinBox(centralwidget);
        price_2->setObjectName("price_2");
        price_2->setMaximum(100000);
        price_2->setSingleStep(1000);

        gridLayout_3->addWidget(price_2, 1, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 4, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        cnt_3 = new QSpinBox(centralwidget);
        cnt_3->setObjectName("cnt_3");
        cnt_3->setMinimum(0);
        cnt_3->setMaximum(30);
        cnt_3->setValue(0);

        gridLayout_3->addWidget(cnt_3, 2, 1, 1, 1);

        price_3 = new QSpinBox(centralwidget);
        price_3->setObjectName("price_3");
        price_3->setMaximum(100000);
        price_3->setSingleStep(1000);

        gridLayout_3->addWidget(price_3, 2, 2, 1, 1);

        cnt_5 = new QSpinBox(centralwidget);
        cnt_5->setObjectName("cnt_5");
        cnt_5->setMaximum(30);

        gridLayout_3->addWidget(cnt_5, 4, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        cnt_2 = new QSpinBox(centralwidget);
        cnt_2->setObjectName("cnt_2");
        cnt_2->setMinimum(0);
        cnt_2->setMaximum(30);
        cnt_2->setValue(0);

        gridLayout_3->addWidget(cnt_2, 1, 1, 1, 1);

        price_5 = new QSpinBox(centralwidget);
        price_5->setObjectName("price_5");
        price_5->setMaximum(100000);
        price_5->setSingleStep(1000);

        gridLayout_3->addWidget(price_5, 4, 2, 1, 1);

        price_4 = new QSpinBox(centralwidget);
        price_4->setObjectName("price_4");
        price_4->setMaximum(100000);
        price_4->setSingleStep(1000);

        gridLayout_3->addWidget(price_4, 3, 2, 1, 1);

        cnt_4 = new QSpinBox(centralwidget);
        cnt_4->setObjectName("cnt_4");
        cnt_4->setMinimum(0);
        cnt_4->setMaximum(30);
        cnt_4->setSingleStep(1);
        cnt_4->setValue(0);

        gridLayout_3->addWidget(cnt_4, 3, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        cnt_1 = new QSpinBox(centralwidget);
        cnt_1->setObjectName("cnt_1");
        cnt_1->setMinimum(0);
        cnt_1->setMaximum(30);
        cnt_1->setValue(0);

        gridLayout_3->addWidget(cnt_1, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 0, 1, 3);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setEnabled(true);

        gridLayout_5->addWidget(label_8, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        start = new QPushButton(centralwidget);
        start->setObjectName("start");

        verticalLayout_3->addWidget(start);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 (\320\276\321\202 12 \320\264\320\276 30 \320\264\320\275\320\265\320\271)", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\320\276\320\265 \320\272\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262 (\320\276\321\202 20 \320\264\320\276 30)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270 \320\275\320\276\320\274\320\265\321\200\320\276\320\262</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\246\320\265\320\275\320\260, \342\202\275</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\320\273\321\216\320\272\321\201", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\233\321\216\320\272\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\262\321\203\320\274\320\265\321\201\321\202\320\275\321\213\320\265 (\321\201 \320\264\320\270\320\262\320\260\320\275\320\276\320\274)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\224\320\262\321\203\320\274\320\265\321\201\321\202\320\275\321\213\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\320\264\320\275\320\276\320\274\320\265\321\201\321\202\320\275\321\213\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\232\320\276\320\273-\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262</p></body></html>", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
