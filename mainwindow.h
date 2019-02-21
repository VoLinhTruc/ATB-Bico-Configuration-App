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
#include <QSerialPortInfo>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDesktopServices>

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
    void setSerialMode(QString serial_mode);

public slots:
    void readFromSerial();

private slots:
    void on_load_file_content_pushButton_released();

    void on_save_file_content_pushButton_released();

    void on_submit_pushButton_released();

    void on_COM_open_pushButton_released();

    void on_COM_close_pushButton_released();

    void on_actionExit_triggered();

    void on_serial_available_port_comboBox_activated(const QString &arg1);

    void on_input_field_to_file_content_pushButton_released();

    void on_file_content_to_input_field_pushButton_released();

    void on_actionHow_To_Use_triggered();

    void on_actionAbout_triggered();

    void on_SSID_send_pushButton_released();

    void on_password_send_pushButton_released();

    void on_static_IP_send_pushButton_released();

    void on_gateway_send_pushButton_released();

    void on_subnet_send_pushButton_released();

    void on_port_send_pushButton_released();

    void on_baudrate_send_pushButton_released();

    void on_time_life_send_pushButton_released();

    void on_file_content_clear_all_pushButton_released();

    void on_serial_content_clear_all_pushButton_released();

    void on_serial_mode_send_pushButton_released();

private:
    Ui::MainWindow *ui;

    QString SSID_data;
    QString password_data;
    QString static_IP_data;
    QString gateway_data;
    QString subnet_data;
    QString port_data;
    QString baudrate_data;
    QString serial_mode_data;
    QString time_life_data;

    QSerialPort serial_port;

};

#endif // MAINWINDOW_H
