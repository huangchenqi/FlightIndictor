#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include <QString>
#include <QByteArray>
#include <QtCharts/QValueAxis>
//表格显示数据引用的文件
#include <QTableView>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QDateTime>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTime>
#include <QStringList>

#include <QMap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qchartInit();
    tableView();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::qchartInit(){
    // 添加以下代码
    /*// 假设你有一个以本地编码（如GBK）存储的字节数组
    QByteArray local8BitBytes = "测偏距(m)";// 这里应该是你的本地编码数据

    // 获取本地编码的QTextCodec（这里可能是GBK，取决于你的系统）
    QTextCodec *codec = QTextCodec::codecForLocale();
    // 或者，如果你知道确切的编码，可以使用：
    //QTextCodec *codec = QTextCodec::codecForName("GBK");

    // 将本地编码字节数组转换为QString
    QString str = codec->toUnicode(local8BitBytes); */
    QLineSeries *series =new QLineSeries();
    QValueAxis *axisX = new QValueAxis();
    QValueAxis *axisXT = new QValueAxis();
    QValueAxis *axisY = new QValueAxis();
    QValueAxis *axisYL = new QValueAxis();
    axisX->setRange(0,30);
    axisXT->setRange(0,30);
    axisY->setRange(28,35);
    axisYL->setRange(28,35);
    axisX->setGridLineVisible(false); // 取消X轴网格线
    axisX->setTickCount(5); // 设置X轴刻度数量，根据需要调整
    axisXT->setGridLineVisible(false); // 取消X轴网格线
    axisXT->setTickCount(5); // 设置X轴刻度数量，根据需要调整

    axisY->setGridLineVisible(false); // 取消Y轴网格线
    axisY->setTickCount(5); // 设置Y轴刻度数量，根据需要调整
    axisYL->setGridLineVisible(false); // 取消Y轴网格线
    axisYL->setTickCount(5); // 设置Y轴刻度数量，根据需要调整
    series->attachAxis(axisX);
    series->attachAxis(axisXT);
    series->attachAxis(axisY);
    series->attachAxis(axisYL);
    *series<<QPointF(11,1)<<QPointF(13,3)<<QPointF(17,6)<<QPointF(18,3)<<QPointF(20,2);
    QChart *chart = new QChart();
    chart->legend()->hide();


    chart->addAxis(axisX,Qt::AlignBottom);
    chart->addAxis(axisXT,Qt::AlignTop);
    chart->addAxis(axisY,Qt::AlignLeft);
    chart->addAxis(axisYL,Qt::AlignRight);
    chart->addSeries(series);
    //chart->createDefaultAxes();默认创造坐标设置坐标的值

    chart->setTitle(QString::fromLocal8Bit("测偏距离(m)"));//chart->setTitle(str);
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::tableView(){

    //创建数据模型
    //QStandardItemModel model;
    //设置列头
    //model.setColumnCount(2);//时间与信息
    //model.setHeaderData(0,Qt::Horizontal,"时间");
    //model.setHeaderData(1,Qt::Horizontal,"信息");

    //添加数据行
    //QDateTime currentTime = QDateTime::currentDateTime();
    //QStandardItem *timeItem = new QStandardItem(currentTime.toString("yyyy-MM-dd hh:mm:ss"));
    //QStandardItem *infoItem = new QStandardItem("这是一条信息");
    //model.appendRow({timeItem,infoItem});

    //创建QTableView并设置模型
    //QTableView tableView;
    //tableView.setModel(&model);

    // 显示窗口
    // tableView.show();

    //设置表格行数
    //ui->tableControlWidget->setColumnCount(2);
    // 自适应列宽
    ui->tableControlWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableTelemetryWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // 设置表头和行数
    //QStringList headers = {"时间", "信息"};
    //ui->tableControlWidget->setColumnCount(headers.size());
    //ui->tableControlWidget->setHorizontalHeaderLabels(headers);

    // 初始化一些示例数据
    QStringList times = {"10:00", "11:30", "13:15", "15:45", "18:00"};
    QStringList info = {"Meeting", "Lunch", "Workshop", "Exercise", "Dinner"};

    // 设置行数
    //ui->tableControlWidget->setRowCount(times.size());

    // 填充数据
    for (int row = 0; row < times.size(); ++row) {
        ui->tableControlWidget->insertRow(row);
        ui->tableTelemetryWidget->insertRow(row);
        QTableWidgetItem *timeItem = new QTableWidgetItem(times[row]);
        timeItem->setTextAlignment(Qt::AlignCenter);
        QTableWidgetItem *infoItem = new QTableWidgetItem(info[row]);
        infoItem->setTextAlignment(Qt::AlignCenter);

        QTableWidgetItem *timeTelItem = new QTableWidgetItem(times[row]);
        timeTelItem->setTextAlignment(Qt::AlignCenter);
        QTableWidgetItem *infoTelItem = new QTableWidgetItem(info[row]);
        infoTelItem->setTextAlignment(Qt::AlignCenter);

        ui->tableControlWidget->setItem(row, 0,timeItem);
        ui->tableControlWidget->setItem(row, 1,infoItem);

        ui->tableTelemetryWidget->setItem(row, 0,timeTelItem);
        ui->tableTelemetryWidget->setItem(row, 1,infoTelItem);
        //ui->tableControlWidget->setItem(row, 0, new QTableWidgetItem(times[row]));
        //ui->tableControlWidget->setItem(row, 1, new QTableWidgetItem(info[row]));


    }

    // 可选：调整列宽以适合内容
    ui->tableControlWidget->resizeColumnsToContents();

    // 可选：设置表头不可点击（默认是可点击的，用于排序）
    ui->tableControlWidget->horizontalHeader()->setSectionsClickable(false);
     ui->tableTelemetryWidget->horizontalHeader()->setSectionsClickable(false);

}

QJsonArray MainWindow::controlInfo()
{
    QJsonArray array;

    return array;

}

QJsonArray MainWindow::telemetryInfo()
{
    QJsonArray array;


    return array;

}
void MainWindow::on_doublePitchSpinBox_valueChanged(double arg1)
{
    ui->graphicsEADI->setPitch(arg1);
    ui->graphicsEADI->setAirspeed(arg1);
    ui->graphicsEADI->redraw();
}


void MainWindow::on_doubleRollSpinBox_valueChanged(double arg1)
{
    ui->graphicsEADI->setRoll(arg1);
    ui->graphicsEADI->setAltitude(arg1);
    ui->graphicsEADI->redraw();
}

