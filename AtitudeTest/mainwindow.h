#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QtCharts>
#include <QtCharts/QChartGlobal>
#include <QMap>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
QT_CHARTS_USE_NAMESPACE

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void qchartInit();
    void tableView();

    QJsonArray controlInfo();//接收控制指令信息并返回model数据
    QJsonArray telemetryInfo();

private slots:
    void on_doublePitchSpinBox_valueChanged(double arg1);

    void on_doubleRollSpinBox_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
