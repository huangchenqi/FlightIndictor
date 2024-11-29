/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QUndoView>
#include <QtWidgets/QWidget>
#include "qfi/qfi_asi.h"
#include "qfi/qfi_eadi.h"
#include "qfi/qfi_hi.h"
#include "qtcharts/qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    qfi_EADI *graphicsEADI;
    QLineEdit *linePitchEdit;
    QDoubleSpinBox *doublePitchSpinBox;
    QLineEdit *lineRollEdit;
    QDoubleSpinBox *doubleRollSpinBox;
    qfi_HI *graphicsHI;
    qfi_ASI *graphicsASI;
    qfi_ASI *graphicsLS;
    qfi_ASI *graphicsOD;
    QGroupBox *groupBox;
    QUndoView *undoView;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_10;
    QChartView *chartView;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_8;
    QPushButton *pushButton_15;
    QTabWidget *tabWidget_2;
    QWidget *tab_12;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QWidget *tab_11;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QWidget *tab_13;
    QWidget *tab_14;
    QGroupBox *groupBox_3;
    QTableWidget *tableControlWidget;
    QGroupBox *groupBox_4;
    QTableWidget *tableTelemetryWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2854, 1692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsEADI = new qfi_EADI(centralwidget);
        graphicsEADI->setObjectName(QString::fromUtf8("graphicsEADI"));
        graphicsEADI->setEnabled(false);
        graphicsEADI->setGeometry(QRect(590, 90, 800, 800));
        graphicsEADI->setMinimumSize(QSize(800, 800));
        graphicsEADI->setMaximumSize(QSize(300, 300));
        graphicsEADI->setFrameShape(QFrame::NoFrame);
        graphicsEADI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setInteractive(false);
        linePitchEdit = new QLineEdit(centralwidget);
        linePitchEdit->setObjectName(QString::fromUtf8("linePitchEdit"));
        linePitchEdit->setGeometry(QRect(590, 10, 81, 31));
        doublePitchSpinBox = new QDoubleSpinBox(centralwidget);
        doublePitchSpinBox->setObjectName(QString::fromUtf8("doublePitchSpinBox"));
        doublePitchSpinBox->setGeometry(QRect(680, 10, 101, 31));
        doublePitchSpinBox->setMinimum(-90.000000000000000);
        doublePitchSpinBox->setMaximum(90.000000000000000);
        lineRollEdit = new QLineEdit(centralwidget);
        lineRollEdit->setObjectName(QString::fromUtf8("lineRollEdit"));
        lineRollEdit->setGeometry(QRect(590, 50, 81, 31));
        doubleRollSpinBox = new QDoubleSpinBox(centralwidget);
        doubleRollSpinBox->setObjectName(QString::fromUtf8("doubleRollSpinBox"));
        doubleRollSpinBox->setGeometry(QRect(680, 50, 101, 31));
        doubleRollSpinBox->setMinimum(-180.000000000000000);
        doubleRollSpinBox->setMaximum(180.000000000000000);
        graphicsHI = new qfi_HI(centralwidget);
        graphicsHI->setObjectName(QString::fromUtf8("graphicsHI"));
        graphicsHI->setEnabled(false);
        graphicsHI->setGeometry(QRect(0, 60, 500, 500));
        graphicsHI->setMinimumSize(QSize(500, 500));
        graphicsHI->setMaximumSize(QSize(500, 500));
        graphicsHI->setFrameShape(QFrame::NoFrame);
        graphicsHI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsHI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsHI->setInteractive(false);
        graphicsASI = new qfi_ASI(centralwidget);
        graphicsASI->setObjectName(QString::fromUtf8("graphicsASI"));
        graphicsASI->setEnabled(false);
        graphicsASI->setGeometry(QRect(1530, 90, 300, 300));
        graphicsASI->setMinimumSize(QSize(300, 300));
        graphicsASI->setMaximumSize(QSize(300, 300));
        graphicsASI->setFrameShape(QFrame::NoFrame);
        graphicsASI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsASI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsASI->setInteractive(false);
        graphicsLS = new qfi_ASI(centralwidget);
        graphicsLS->setObjectName(QString::fromUtf8("graphicsLS"));
        graphicsLS->setEnabled(false);
        graphicsLS->setGeometry(QRect(1530, 450, 300, 300));
        graphicsLS->setMinimumSize(QSize(300, 300));
        graphicsLS->setMaximumSize(QSize(300, 300));
        graphicsLS->setFrameShape(QFrame::NoFrame);
        graphicsLS->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsLS->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsLS->setInteractive(false);
        graphicsOD = new qfi_ASI(centralwidget);
        graphicsOD->setObjectName(QString::fromUtf8("graphicsOD"));
        graphicsOD->setEnabled(false);
        graphicsOD->setGeometry(QRect(1530, 780, 300, 300));
        graphicsOD->setMinimumSize(QSize(300, 300));
        graphicsOD->setMaximumSize(QSize(300, 300));
        graphicsOD->setFrameShape(QFrame::NoFrame);
        graphicsOD->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsOD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsOD->setInteractive(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(470, 930, 941, 301));
        undoView = new QUndoView(groupBox);
        undoView->setObjectName(QString::fromUtf8("undoView"));
        undoView->setGeometry(QRect(100, 40, 256, 192));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(80, 1310, 1341, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget->addTab(tab_10, QString());
        chartView = new QChartView(centralwidget);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        chartView->setGeometry(QRect(60, 600, 371, 621));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1890, 10, 781, 411));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 161, 71));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 120, 161, 71));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 210, 161, 71));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 300, 161, 71));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 30, 161, 71));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 120, 161, 71));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(210, 210, 161, 71));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(400, 120, 161, 71));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(400, 210, 161, 71));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(400, 300, 161, 71));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(590, 30, 141, 71));
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(590, 120, 141, 71));
        pushButton_14 = new QPushButton(groupBox_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(590, 210, 141, 71));
        pushButton_16 = new QPushButton(groupBox_2);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(400, 30, 161, 71));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 300, 161, 71));
        pushButton_15 = new QPushButton(groupBox_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(590, 300, 141, 71));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(1890, 450, 781, 331));
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        pushButton_29 = new QPushButton(tab_12);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setGeometry(QRect(30, 20, 161, 71));
        pushButton_30 = new QPushButton(tab_12);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setGeometry(QRect(220, 20, 161, 71));
        pushButton_31 = new QPushButton(tab_12);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setGeometry(QRect(410, 20, 151, 71));
        pushButton_32 = new QPushButton(tab_12);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setGeometry(QRect(590, 20, 151, 71));
        pushButton_33 = new QPushButton(tab_12);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setGeometry(QRect(30, 120, 161, 71));
        pushButton_34 = new QPushButton(tab_12);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        pushButton_34->setGeometry(QRect(220, 120, 161, 71));
        pushButton_35 = new QPushButton(tab_12);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        pushButton_35->setGeometry(QRect(410, 120, 151, 71));
        pushButton_36 = new QPushButton(tab_12);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        pushButton_36->setGeometry(QRect(590, 120, 151, 71));
        pushButton_37 = new QPushButton(tab_12);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setGeometry(QRect(30, 220, 161, 71));
        pushButton_38 = new QPushButton(tab_12);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));
        pushButton_38->setGeometry(QRect(220, 220, 161, 71));
        tabWidget_2->addTab(tab_12, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        pushButton_17 = new QPushButton(tab_11);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(40, 30, 161, 61));
        pushButton_18 = new QPushButton(tab_11);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(40, 110, 161, 61));
        pushButton_19 = new QPushButton(tab_11);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(40, 200, 161, 61));
        pushButton_20 = new QPushButton(tab_11);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(230, 30, 151, 61));
        pushButton_21 = new QPushButton(tab_11);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(230, 110, 151, 61));
        pushButton_22 = new QPushButton(tab_11);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(410, 200, 141, 61));
        pushButton_23 = new QPushButton(tab_11);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(410, 30, 141, 61));
        pushButton_24 = new QPushButton(tab_11);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(410, 110, 141, 61));
        pushButton_25 = new QPushButton(tab_11);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(580, 200, 151, 61));
        pushButton_26 = new QPushButton(tab_11);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(580, 30, 151, 61));
        pushButton_27 = new QPushButton(tab_11);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(580, 110, 151, 61));
        pushButton_28 = new QPushButton(tab_11);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setGeometry(QRect(230, 200, 151, 61));
        tabWidget_2->addTab(tab_11, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        tabWidget_2->addTab(tab_14, QString());
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1890, 830, 781, 311));
        tableControlWidget = new QTableWidget(groupBox_3);
        if (tableControlWidget->columnCount() < 2)
            tableControlWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableControlWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableControlWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableControlWidget->setObjectName(QString::fromUtf8("tableControlWidget"));
        tableControlWidget->setGeometry(QRect(20, 30, 741, 261));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(1890, 1210, 771, 391));
        tableTelemetryWidget = new QTableWidget(groupBox_4);
        if (tableTelemetryWidget->columnCount() < 2)
            tableTelemetryWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableTelemetryWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableTelemetryWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableTelemetryWidget->setObjectName(QString::fromUtf8("tableTelemetryWidget"));
        tableTelemetryWidget->setGeometry(QRect(20, 30, 731, 331));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2854, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        linePitchEdit->setText(QCoreApplication::translate("MainWindow", "\344\277\257\344\273\260\350\247\222", nullptr));
        lineRollEdit->setText(QCoreApplication::translate("MainWindow", "\346\250\252\346\273\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\350\246\201\345\217\202\346\225\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\351\243\236\350\241\214\345\217\202\346\225\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\345\217\221\345\212\250\346\234\272\347\212\266\346\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250\350\256\276\345\244\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\346\203\257\345\257\274\350\256\276\345\244\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\344\274\272\346\234\215\350\210\265\346\234\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\347\224\265\346\260\224\350\256\276\345\244\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("MainWindow", "\346\224\276\351\243\236\345\217\212\345\205\266\344\273\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("MainWindow", "\344\270\213\346\273\221\346\233\262\347\272\277", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\351\243\236\350\241\214\346\216\247\345\210\266", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\250\213\345\272\217\346\216\247\345\210\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\201\2172\345\272\246", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\201\2172\345\272\246", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\270\213\346\273\221\346\205\242", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\351\201\245\346\216\247\346\223\215\347\272\265", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\200\27620\345\272\246", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\200\27620\345\272\246", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\347\210\254\345\215\207\346\205\242", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\347\210\254\345\215\207\345\277\253", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\350\210\252\350\241\214\347\201\257\345\274\200", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\243\236", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\345\244\215\351\243\236", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\347\233\264\351\243\236", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\351\242\204\346\214\207\344\273\244", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\344\270\213\346\273\221\345\277\253", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\350\210\252\350\241\214\347\201\257\345\205\263", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "\347\251\272\344\270\255\346\212\225\346\224\276", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "\346\273\221\350\275\250\350\265\267\351\243\236", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "\345\274\271\345\260\204\350\265\267\351\243\236", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "\346\273\221\350\267\221\350\265\267\351\243\236", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "\346\211\213\346\216\267\350\265\267\351\243\236", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "\350\203\214\350\264\237\350\265\267\351\243\236", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "\344\274\236\351\231\215\345\233\236\346\224\266", nullptr));
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "\347\251\272\344\270\255\345\233\236\346\224\266", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "\346\273\221\350\267\221\347\235\200\351\231\206", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264\347\235\200\351\231\206", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QCoreApplication::translate("MainWindow", "\350\265\267\351\243\236/\347\235\200\351\231\206", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "\345\267\241\350\210\2521", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "\350\245\237\347\277\27415\345\272\246", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "\347\246\201\346\255\242\350\207\252\345\212\250\351\201\245\346\216\247", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "\345\267\241\350\210\2522", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "\350\245\237\347\277\27430\345\272\246", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "\351\242\204\346\257\201", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "\345\267\241\350\210\2523", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "\351\201\245\346\216\247\347\272\240\345\201\217", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "\345\215\263\346\257\201", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "\350\245\237\347\277\2740\345\272\246", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\350\207\252\345\212\250\351\201\245\346\216\247", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "\344\274\236\351\231\215", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QCoreApplication::translate("MainWindow", "\345\267\241\350\210\252", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\351\201\245\346\216\247\346\214\207\344\273\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableControlWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableControlWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\201\245\346\265\213\346\212\245\346\226\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableTelemetryWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableTelemetryWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
