#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QSerialPortInfo> serial_available_port = QSerialPortInfo::availablePorts();
    if(serial_available_port.size() > 0)
    {
        for(int i = 0; i < serial_available_port.size(); i++)
        {
            ui->serial_available_port_comboBox->addItem(serial_available_port[i].portName());
        }
        ui->serial_available_port_comboBox->setCurrentIndex(1);
    }

    ui->serial_mode_comboBox->setItemData(ui->serial_mode_comboBox->findText("SERIAL_5N2", Qt::MatchExactly), 0, Qt::UserRole - 1);
    ui->serial_mode_comboBox->setItemData(ui->serial_mode_comboBox->findText("SERIAL_5E2", Qt::MatchExactly), 0, Qt::UserRole - 1);
    ui->serial_mode_comboBox->setItemData(ui->serial_mode_comboBox->findText("SERIAL_5O2", Qt::MatchExactly), 0, Qt::UserRole - 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString MainWindow::makeString()
{
    QJsonObject temp_json_obj;
    if(SSID_data != "")
    {
        temp_json_obj.insert(QString("SSID_data"), QJsonValue(SSID_data));
    }
    if(password_data != "")
    {
        temp_json_obj.insert(QString("password_data"), QJsonValue(password_data));
    }
    if(static_IP_data != "")
    {
        temp_json_obj.insert(QString("static_IP_data"), QJsonValue(static_IP_data));
    }
    if(gateway_data != "")
    {
        temp_json_obj.insert(QString("gateway_data"), QJsonValue(gateway_data));
    }
    if(subnet_data != "")
    {
        temp_json_obj.insert(QString("subnet_data"), QJsonValue(subnet_data));
    }
    if(port_data != "")
    {
        temp_json_obj.insert(QString("port_data"), QJsonValue(port_data));
    }
    if(baudrate_data != "")
    {
        temp_json_obj.insert(QString("baudrate_data"), QJsonValue(baudrate_data));
    }
    if(serial_mode_data != "")
    {
        temp_json_obj.insert(QString("serial_mode_data"), QJsonValue(serial_mode_data));
    }
    if(time_life_data != "")
    {
        temp_json_obj.insert(QString("time_life_data"), QJsonValue(time_life_data));
    }

    QJsonDocument json_doc(temp_json_obj);
    QByteArray temp_arr = json_doc.toJson();
    QString temp_str = QString(temp_arr);
    return temp_str;
}

void MainWindow::readFromSerial()
{
    if(serial_port.bytesAvailable())
    {
       ui->serial_content_plainTextEdit->setPlainText(ui->serial_content_plainTextEdit->toPlainText() + serial_port.readAll());
       ui->serial_content_plainTextEdit->verticalScrollBar()->setValue(ui->serial_content_plainTextEdit->verticalScrollBar()->maximum());
    }
    QTimer::singleShot(1, this, SLOT(readFromSerial()));
}

void MainWindow::setSerialMode(QString serial_mode)
{
    if(serial_mode == "SERIAL_5N1")
    {
        serial_port.setDataBits(QSerialPort::Data5);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_6N1")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_7N1")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_8N1")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    //can't open port when testing on 15-2-2019
    else if(serial_mode == "SERIAL_5N2")
    {
//        serial_port.setDataBits(QSerialPort::Data5);
//        serial_port.setParity(QSerialPort::NoParity);
//        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_6N2")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_7N2")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_8N2")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::NoParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_5E1")
    {
        serial_port.setDataBits(QSerialPort::Data5);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_6E1")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_7E1")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_8E1")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    //can't open port when testing on 15-2-2019
    else if(serial_mode == "SERIAL_5E2")
    {
//        serial_port.setDataBits(QSerialPort::Data5);
//        serial_port.setParity(QSerialPort::EvenParity);
//        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_6E2")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_7E2")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_8E2")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::EvenParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_5O1")
    {
        serial_port.setDataBits(QSerialPort::Data5);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_6O1")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_7O1")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    else if(serial_mode == "SERIAL_8O1")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::OneStop);
    }
    //can't open port when testing on 15-2-2019
    else if(serial_mode == "SERIAL_5O2")
    {
//        serial_port.setDataBits(QSerialPort::Data5);
//        serial_port.setParity(QSerialPort::OddParity);
//        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_6O2")
    {
        serial_port.setDataBits(QSerialPort::Data6);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_7O2")
    {
        serial_port.setDataBits(QSerialPort::Data7);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
    else if(serial_mode == "SERIAL_8O2")
    {
        serial_port.setDataBits(QSerialPort::Data8);
        serial_port.setParity(QSerialPort::OddParity);
        serial_port.setStopBits(QSerialPort::TwoStop);
    }
}

//---------------------------------------------------------------------------------------------------------------------------------




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

void MainWindow::on_submit_pushButton_released()
{
    QTextStream data_stream(&serial_port);
    data_stream << ui->file_content_plainTextEdit->toPlainText();
}

void MainWindow::on_COM_open_pushButton_released()
{
    serial_port.setPortName(ui->serial_available_port_comboBox->currentText());
    serial_port.setBaudRate(ui->serial_baudrate_comboBox->currentText().toLong());
    serial_port.setDataBits(QSerialPort::Data8);
    serial_port.setParity(QSerialPort::NoParity);
    serial_port.setStopBits(QSerialPort::OneStop);
//    setSerialMode(ui->serial_mode_comboBox->currentText());
    serial_port.setFlowControl(QSerialPort::NoFlowControl);

    if(!serial_port.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(Q_NULLPTR, "Info", serial_port.errorString());
    }
    else
    {
        ui->COM_status_label->setText("Connecting !!!");
    }

    QTimer::singleShot(1, this, SLOT(readFromSerial()));
}

void MainWindow::on_COM_close_pushButton_released()
{
    serial_port.close();
    ui->COM_status_label->setText("Disconnected");
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_serial_available_port_comboBox_activated(const QString &arg1)
{
    if(arg1 == "Refresh")
    {
        while(ui->serial_available_port_comboBox->count() > 1)
        {
            ui->serial_available_port_comboBox->removeItem(ui->serial_available_port_comboBox->count()-1);
        }

        QList<QSerialPortInfo> serial_available_port = QSerialPortInfo::availablePorts();
        ui->serial_available_port_comboBox->setMaxVisibleItems(10);

        for(int i = 0; i < serial_available_port.size(); i++)
        {
            ui->serial_available_port_comboBox->addItem(serial_available_port[i].portName());
        }
    }
}

void MainWindow::on_input_field_to_file_content_pushButton_released()
{
    SSID_data = ui->SSID_lineEdit->text();
    password_data = ui->password_lineEdit->text();
    static_IP_data = ui->static_IP_lineEdit->text();
    gateway_data = ui->gateway_lineEdit->text();
    subnet_data = ui->subnet_lineEdit->text();
    port_data = ui->port_lineEdit->text();
    baudrate_data = ui->baudrate_lineEdit->text();
    time_life_data = ui->time_life_lineEdit->text();
    serial_mode_data = ui->serial_mode_lineEdit->text();

    ui->file_content_plainTextEdit->setPlainText(makeString());
}

void MainWindow::on_file_content_to_input_field_pushButton_released()
{
    QJsonDocument json_doc = QJsonDocument::fromJson(ui->file_content_plainTextEdit->toPlainText().toUtf8());
    QJsonObject json_obj = json_doc.object();
    if(!json_doc.isNull())
    {
        if(json_doc.isObject())
        {
            json_obj = json_doc.object();

            if(json_obj.contains("SSID_data"))
            {
                QJsonValue SSID_data_json_val = json_obj["SSID_data"];
                ui->SSID_lineEdit->setText(SSID_data_json_val.toString());
            }
            else
            {
                ui->SSID_lineEdit->setText("");
            }

            if(json_obj.contains("password_data"))
            {
                QJsonValue password_data_json_val = json_obj["password_data"];
                ui->password_lineEdit->setText(password_data_json_val.toString());
            }
            else
            {
                ui->password_lineEdit->setText("");
            }

            if(json_obj.contains("static_IP_data"))
            {
                QJsonValue static_IP_data_json_val = json_obj["static_IP_data"];
                ui->static_IP_lineEdit->setText(static_IP_data_json_val.toString());
            }
            else
            {
                ui->static_IP_lineEdit->setText("");
            }

            if(json_obj.contains("gateway_data"))
            {
                QJsonValue gateway_data_json_val = json_obj["gateway_data"];
                ui->gateway_lineEdit->setText(gateway_data_json_val.toString());
            }
            else
            {
                ui->gateway_lineEdit->setText("");
            }

            if(json_obj.contains("subnet_data"))
            {
                QJsonValue subnet_data_val = json_obj["subnet_data"];
                ui->subnet_lineEdit->setText(subnet_data_val.toString());
            }
            else
            {
                ui->subnet_lineEdit->setText("");
            }

            if(json_obj.contains("port_data"))
            {
                QJsonValue port_data_json_val = json_obj["port_data"];
                ui->port_lineEdit->setText(port_data_json_val.toString());
            }
            else
            {
                ui->port_lineEdit->setText("");
            }

            if(json_obj.contains("baudrate_data"))
            {
                QJsonValue baudrate_data_json_val = json_obj["baudrate_data"];
                ui->baudrate_lineEdit->setText(baudrate_data_json_val.toString());
            }
            else
            {
                ui->baudrate_lineEdit->setText("");
            }

            if(json_obj.contains("serial_mode_data"))
            {
                QJsonValue serial_mode_data_json_val = json_obj["serial_mode_data"];
                ui->serial_mode_lineEdit->setText(serial_mode_data_json_val.toString());
            }
            else
            {
                ui->serial_mode_lineEdit->setText("");
            }

            if(json_obj.contains("time_life_data"))
            {
                QJsonValue time_life_data_json_val = json_obj["time_life_data"];
                ui->time_life_lineEdit->setText(time_life_data_json_val.toString());
            }
            else
            {
                ui->time_life_lineEdit->setText("");
            }

        }
        else
        {
            QMessageBox::information(Q_NULLPTR, "Info", "Document is not an object");
        }
    }
    else
    {
        QMessageBox::information(Q_NULLPTR, "Info", "Invalid JSON");
    }


}

void MainWindow::on_actionHow_To_Use_triggered()
{
//    QDesktopServices::openUrl(QString("https://www.youtube.com/channel/UChTJ_xCIukm-FPVsuH-R4Ow"));
}

void MainWindow::on_actionAbout_triggered()
{
    QDesktopServices::openUrl(QString("http://www.autobasescada.com/"));
}

void MainWindow::on_SSID_send_pushButton_released()
{
    SSID_data = ui->SSID_lineEdit->text();
    QString temp_str = QString("{") + "\"SSID_data\"" + ":" + "\"" + SSID_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_password_send_pushButton_released()
{
    password_data = ui->password_lineEdit->text();
    QString temp_str = QString("{") + "\"password_data\"" + ":" + "\"" + password_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_static_IP_send_pushButton_released()
{
    static_IP_data = ui->static_IP_lineEdit->text();
    QString temp_str = QString("{") + "\"static_IP_data\"" + ":" + "\"" + static_IP_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_gateway_send_pushButton_released()
{
    gateway_data = ui->gateway_lineEdit->text();
    QString temp_str = QString("{") + "\"gateway_data\"" + ":" + "\"" + gateway_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_subnet_send_pushButton_released()
{
    subnet_data = ui->subnet_lineEdit->text();
    QString temp_str = QString("{") + "\"subnet_data\"" + ":" + "\"" + subnet_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_port_send_pushButton_released()
{
    port_data = ui->port_lineEdit->text();
    QString temp_str = QString("{") + "\"port_data\"" + ":" + "\"" + port_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_baudrate_send_pushButton_released()
{
    baudrate_data = ui->baudrate_lineEdit->text();
    QString temp_str = QString("{") + "\"baudrate_data\"" + ":" + "\"" +  baudrate_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_serial_mode_send_pushButton_released()
{
    serial_mode_data = ui->serial_mode_lineEdit->text();
    QString temp_str = QString("{") + "\"serial_mode_data\"" + ":" + "\"" +  serial_mode_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_time_life_send_pushButton_released()
{
    time_life_data = ui->time_life_lineEdit->text();
    QString temp_str = QString("{") + "\"time_life_data\"" + ":" + "\"" +  time_life_data + "\"" + "}";
    QTextStream data_stream(&serial_port);
    data_stream << temp_str;
    ui->file_content_plainTextEdit->setPlainText(temp_str);
}

void MainWindow::on_file_content_clear_all_pushButton_released()
{
    ui->file_content_plainTextEdit->clear();
}

void MainWindow::on_serial_content_clear_all_pushButton_released()
{
    ui->serial_content_plainTextEdit->clear();

}
