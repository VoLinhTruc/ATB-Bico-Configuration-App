#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
};

#endif // MAINWINDOW_H
