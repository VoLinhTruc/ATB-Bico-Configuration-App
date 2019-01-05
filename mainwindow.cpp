#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QSerialPort>
#include <QPalette>

static QString SSID_data;
static QString password_data;
static QString static_IP_data;
static QString gateway_data;
static QString subnet_data;
static QString port_data;
static QSerialPort serial_port;

static QString makeString()
{
    QString temp_str = QString("{\n") + "\tSSID_data" + ":" + SSID_data + ",\n"
                        + "\tpassword_data" + ":" + password_data + ",\n"
                        + "\tstatic_IP_data" + ":" + static_IP_data + ",\n"
                        + "\tgateway_data" + ":" + gateway_data + ",\n"
                        + "\tsubnet_data" + ":" + subnet_data + ",\n"
                        + "\tport_data" + ":" + port_data + "\n}";
    return temp_str;
}


void MainWindow::on_load_file_content_pushButton_released()
{
    // convert file_path_lineEdit text to QString
    QString file_path_lineEdit;
    file_path_lineEdit = ui->file_path_lineEdit->text();
    if(file_path_lineEdit == "")
    {
        file_path_lineEdit = QFileDialog::getOpenFileName(this, "Open File", "/home", "Text files (*.txt *.atb *.json)");
    }

    // open file via above QString
    QFile file(file_path_lineEdit);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(Q_NULLPTR, "Info", file.errorString());
    }

    // read all from file and pass content to setPlainText
    ui->file_content_plainTextEdit->setPlainText(file.readAll());

    // close file
    file.close();
}

void MainWindow::on_save_file_content_pushButton_released()
{
    // convert file_path_lineEdit text to QString
    QString file_path_lineEdit;
    file_path_lineEdit = ui->file_path_lineEdit->text();
    if(file_path_lineEdit == "")
    {
        file_path_lineEdit = QFileDialog::getSaveFileName(this, "Save configuration", "/home", "Text files (*.atb *.txt *.json)");
    }

    // open file via above QString
    QFile file(file_path_lineEdit);
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(Q_NULLPTR, "Info", file.errorString());
    }

    // create stream to set file content by content of file_content_plainTextEdit
    QTextStream content_to_file(&file);
    content_to_file << ui->file_content_plainTextEdit->toPlainText();

    // close file
    file.close();

}

void MainWindow::on_SSID_lineEdit_textChanged(const QString &arg1)
{
    SSID_data = ui->SSID_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_password_lineEdit_textChanged(const QString &arg1)
{
    password_data = ui->password_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_static_IP_lineEdit_textChanged(const QString &arg1)
{
    static_IP_data = ui->static_IP_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_gateway_lineEdit_textChanged(const QString &arg1)
{
    gateway_data = ui->gateway_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_subnet_lineEdit_textChanged(const QString &arg1)
{
    subnet_data = ui->subnet_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_port_lineEdit_textChanged(const QString &arg1)
{
    port_data = ui->port_lineEdit->text();
    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_submit_pushButton_released()
{
    QTextStream data_stream(&serial_port);
    data_stream << ui->file_content_plainTextEdit->toPlainText();
}

void MainWindow::on_COM_open_pushButton_released()
{
    serial_port.setPortName(ui->COM_selecte_lineEdit->text());
    serial_port.setBaudRate(QSerialPort::Baud9600);
    serial_port.setDataBits(QSerialPort::Data8);
    serial_port.setParity(QSerialPort::NoParity);
    serial_port.setFlowControl(QSerialPort::NoFlowControl);

    if(!serial_port.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(Q_NULLPTR, "Info", serial_port.errorString());
    }
    else
    {
        ui->COM_selecte_lineEdit->setStyleSheet("QLineEdit { background: rgb(33, 150, 243);}");
    }
}

void MainWindow::on_COM_close_pushButton_released()
{
    serial_port.close();
    ui->COM_selecte_lineEdit->setStyleSheet("QLineEdit { background: rgb(255, 255, 255); selection-background-color: rgb(0, 99, 233); }");
}

void MainWindow::on_SSID_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "SSID_data" + ":" + SSID_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}

void MainWindow::on_password_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "password_data" + ":" + password_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}

void MainWindow::on_static_IP_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "static_IP_data" + ":" + static_IP_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}

void MainWindow::on_gateway_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "gateway_data" + ":" + gateway_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}

void MainWindow::on_subnet_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "subnet_data" + ":" + subnet_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}

void MainWindow::on_port_pushButton_released()
{
    QString final_string_to_be_sent = QString("{") + "port_data" + ":" + port_data + "}";
    QTextStream data_stream(&serial_port);
    data_stream << final_string_to_be_sent;
}
