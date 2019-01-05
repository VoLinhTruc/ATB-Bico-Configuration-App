#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QSerialPort>
#include <QPalette>
#include <QTimer>
#include <QScrollBar>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    QString makeString();

public slots:
    void readFromSerial();

private slots:
    void on_load_file_content_pushButton_released();

    void on_save_file_content_pushButton_released();

    void on_SSID_lineEdit_textChanged(const QString &arg1);

    void on_password_lineEdit_textChanged(const QString &arg1);

    void on_static_IP_lineEdit_textChanged(const QString &arg1);

    void on_gateway_lineEdit_textChanged(const QString &arg1);

    void on_subnet_lineEdit_textChanged(const QString &arg1);

    void on_port_lineEdit_textChanged(const QString &arg1);

    void on_submit_pushButton_released();

    void on_COM_open_pushButton_released();

    void on_COM_close_pushButton_released();

    void on_SSID_pushButton_released();

    void on_password_pushButton_released();

    void on_static_IP_pushButton_released();

    void on_gateway_pushButton_released();

    void on_subnet_pushButton_released();

    void on_port_pushButton_released();

private:
    Ui::MainWindow *ui;

    QString SSID_data;
    QString password_data;
    QString static_IP_data;
    QString gateway_data;
    QString subnet_data;
    QString port_data;
    QSerialPort serial_port;
};

#endif // MAINWINDOW_H
