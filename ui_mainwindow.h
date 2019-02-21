/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionHow_To_Use;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLineEdit *SSID_lineEdit;
    QLineEdit *password_lineEdit;
    QLineEdit *static_IP_lineEdit;
    QLineEdit *gateway_lineEdit;
    QLineEdit *subnet_lineEdit;
    QLineEdit *port_lineEdit;
    QLabel *SSID_label;
    QLabel *password_label;
    QLabel *static_IP_label;
    QLabel *gateway_label;
    QLabel *subnet_label;
    QLabel *port_label;
    QLabel *baurate_label;
    QLabel *time_life_label;
    QLineEdit *baudrate_lineEdit;
    QLineEdit *time_life_lineEdit;
    QPushButton *SSID_send_pushButton;
    QPushButton *password_send_pushButton;
    QPushButton *static_IP_send_pushButton;
    QPushButton *gateway_send_pushButton;
    QPushButton *subnet_send_pushButton;
    QPushButton *port_send_pushButton;
    QPushButton *baudrate_send_pushButton;
    QPushButton *time_life_send_pushButton;
    QLineEdit *serial_mode_lineEdit;
    QLabel *serial_mode_label;
    QPushButton *serial_mode_send_pushButton;
    QGroupBox *groupBox_2;
    QLineEdit *file_path_lineEdit;
    QPushButton *load_file_content_pushButton;
    QPushButton *save_file_content_pushButton;
    QPlainTextEdit *file_content_plainTextEdit;
    QPlainTextEdit *serial_content_plainTextEdit;
    QLabel *file_path_label;
    QLabel *file_content_label;
    QLabel *serial_content_label;
    QPushButton *file_content_clear_all_pushButton;
    QPushButton *serial_content_clear_all_pushButton;
    QGroupBox *groupBox_3;
    QPushButton *COM_open_pushButton;
    QPushButton *COM_close_pushButton;
    QPushButton *submit_pushButton;
    QLabel *COM_status_label;
    QComboBox *serial_available_port_comboBox;
    QComboBox *serial_baudrate_comboBox;
    QComboBox *serial_mode_comboBox;
    QLabel *label;
    QPushButton *input_field_to_file_content_pushButton;
    QPushButton *file_content_to_input_field_pushButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(915, 583);
        MainWindow->setStyleSheet(QLatin1String("/* QDarkStyleSheet --------------------------------------------------------\n"
"\n"
"This is the main style sheet, the palette has nine main colors.\n"
"It is based on three selecting colors, three greyish (background) colors\n"
"plus three whitish (foreground) colors. Each set of widgets of the same\n"
"type have a header like this:\n"
"\n"
"    ------------------\n"
"    GroupName --------\n"
"    ------------------\n"
"\n"
"And each widget is separated with a header like this:\n"
"\n"
"    QWidgetName ------\n"
"\n"
"This makes more easy to find and change some css field. The basic\n"
"configuration is described bellow.\n"
"\n"
"    SELECTION ------------\n"
"\n"
"        sel_light  #179AE0 #148CD2 (selection/hover/active)\n"
"        sel_normal #3375A3 #1464A0 (selected)\n"
"        sel_dark   #18465D #14506E (selected disabled)\n"
"\n"
"    FOREGROUND -----------\n"
"\n"
"        for_light  #EFF0F1 #F0F0F0 (texts/labels)\n"
"        for_dark   #505F69 #787878 (disabled texts)\n"
"\n"
"    BACKGROUND -----"
                        "------\n"
"\n"
"        bac_light  #4D545B #505F69 (unpressed)\n"
"        bac_normal #31363B #32414B (border, disabled, pressed, checked, toolbars, menus)\n"
"        bac_dark   #232629 #19232D (background)\n"
"\n"
"If a stranger configuration is required because of a bugfix or anything\n"
"else, keep the comment on that line to nobodys changed it, including the\n"
"issue number.\n"
"--------------------------------------------------------------------------- */\n"
"\n"
"\n"
"\n"
"/* QWidget ---------------------------------------------------------------- */\n"
"\n"
"QWidget {\n"
"    background-color: #19232D;\n"
"    border: 0px solid #32414B;\n"
"    padding: 0px;\n"
"    color: #F0F0F0;\n"
"    selection-background-color: #1464A0;\n"
"    selection-color: #F0F0F0;\n"
"}\n"
"\n"
"QWidget:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"    selection-background-color: #14506E;\n"
"    selection-color: #787878;\n"
"}\n"
"\n"
"QWidget:item:selected {\n"
"    background-color: #1464A0;\n"
""
                        "}\n"
"\n"
"QWidget:item:hover {\n"
"    background-color: #148CD2;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* QMainWindow ------------------------------------------------------------ */\n"
"/* This adjusts the splitter in the dock widget, not qsplitter              */\n"
"\n"
"\n"
"QMainWindow::separator {\n"
"    background-color: #32414B;\n"
"    border: 0 solid #19232D;\n"
"    spacing: 0;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QMainWindow::separator:hover {\n"
"    background-color: #505F69;\n"
"    border: 0px solid #148CD2;\n"
"}\n"
"\n"
"QMainWindow::separator:horizontal {\n"
"    width: 5px;\n"
"    margin-top: 2px;\n"
"    margin-bottom: 2px;\n"
"    image: url(:/qss_icons/rc/Vsepartoolbar.png);\n"
"}\n"
"\n"
"QMainWindow::separator:vertical {\n"
"    height: 5px;\n"
"    margin-left: 2px;\n"
"    margin-right: 2px;\n"
"    image: url(:/qss_icons/rc/Hsepartoolbar.png);\n"
"}\n"
"\n"
"/* QToolTip --------------------------------------------------------------- */\n"
"\n"
"QToolTip {\n"
"    background-colo"
                        "r: #148CD2;\n"
"    border: 1px solid #19232D;\n"
"    color: #19232D;\n"
"    padding: 0;   /*remove padding, for fix combo box tooltip*/\n"
"    opacity: 230; /*reducing transparency to read better*/\n"
"}\n"
"\n"
"/* QStatusBar ------------------------------------------------------------- */\n"
"\n"
"QStatusBar {\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"QStatusBar QToolTip {\n"
"    background-color: #148CD2;\n"
"    border: 1px solid #19232D;\n"
"    color: #19232D;\n"
"    padding: 0;   /*remove padding, for fix combo box tooltip*/\n"
"    opacity: 230; /*reducing transparency to read better*/\n"
"}\n"
"\n"
"/* QCheckBox -------------------------------------------------------------- */\n"
"\n"
"QCheckBox {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    spacing: 4px;\n"
"    outline: none;\n"
"    padding-top: 4px;\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QCheckBox:focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QCheckBox QWidget:disabled {\n"
"    background-color: #19232D;\n"
""
                        "    color: #787878;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    margin-left: 4px;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover,\n"
"QCheckBox::indicator:unchecked:focus,\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_focus.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_disabled.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/qss_icons/rc/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover,\n"
"QCheckBox::indicator:checked:focus,\n"
"QCheckBox::indicator:checked:pressed {\n"
"    border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_checked_focus.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled{\n"
"    image: url(:/qss_icons/rc/checkbox_checked_disabled.png"
                        ");\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate {\n"
"    image: url(:/qss_icons/rc/checkbox_indeterminate.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:disabled {\n"
"    image: url(:/qss_icons/rc/checkbox_indeterminate_disabled.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:focus,\n"
"QCheckBox::indicator:indeterminate:hover,\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"    image: url(:/qss_icons/rc/checkbox_indeterminate_focus.png);\n"
"}\n"
"\n"
"/* QGroupBox -------------------------------------------------------------- */\n"
"\n"
"QGroupBox {\n"
"    font-weight: bold;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    margin-top: 16px;\n"
"}\n"
"\n"
"\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 3px;\n"
"    padding-left: 3px;\n"
"    padding-right: 5px;\n"
"    padding-top: 8px;\n"
"    padding-bottom: 16px;\n"
"}\n"
"\n"
"QGroupBox::indicator {\n"
"    margin"
                        "-left: 4px;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QGroupBox::indicator {\n"
"    margin-left: 2px;\n"
"}\n"
"\n"
"QGroupBox::indicator:unchecked:hover,\n"
"QGroupBox::indicator:unchecked:focus,\n"
"QGroupBox::indicator:unchecked:pressed {\n"
"    border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_focus.png);\n"
"}\n"
"\n"
"QGroupBox::indicator:checked:hover,\n"
"QGroupBox::indicator:checked:focus,\n"
"QGroupBox::indicator:checked:pressed {\n"
"    border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_checked_focus.png);\n"
"}\n"
"\n"
"QGroupBox::indicator:checked:disabled {\n"
"    image: url(:/qss_icons/rc/checkbox_checked_disabled.png);\n"
"}\n"
"\n"
"QGroupBox::indicator:unchecked:disabled {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_disabled.png);\n"
"}\n"
"\n"
"/* QRadioButton ----------------------------------------------------------- */\n"
"\n"
"QRadioButton {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    spacing: 0;\n"
"    padding: "
                        "0;\n"
"    border: none;\n"
"    outline: none;\n"
"}\n"
"\n"
"QRadioButton:focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"    border: none;\n"
"    outline: none;\n"
"}\n"
"\n"
"QRadioButton QWidget {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    spacing: 0px;\n"
"    padding: 0px;\n"
"    outline: none;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    border: none;\n"
"    outline: none;\n"
"    margin-bottom: 2px;\n"
"    width: 25px;\n"
"    height: 25px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    image: url(:/qss_icons/rc/radio_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover,\n"
"QRadioButton::indicator:unchecked:focus,\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"    border: none;\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_unchecked_focus.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    border: none;"
                        "\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover,\n"
"QRadioButton::indicator:checked:focus,\n"
"QRadioButton::indicator:checked:pressed {\n"
"    border: none;\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked_focus.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled {\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked_disabled.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled {\n"
"    image: url(:/qss_icons/rc/radio_unchecked_disabled.png);\n"
"}\n"
"\n"
"/* QMenuBar --------------------------------------------------------------- */\n"
"\n"
"QMenuBar {\n"
"    background-color: #32414B;\n"
"    padding: 2px;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QMenuBar:focus {\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background: transparent;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
" "
                        "   padding: 4px;\n"
"    background: transparent;\n"
"    border: 0px solid #32414B;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    padding: 4px;\n"
"    border: 0px solid #32414B;\n"
"    background-color: #148CD2;\n"
"    color: #F0F0F0;\n"
"    margin-bottom: 0px;\n"
"    padding-bottom: 0px;\n"
"}\n"
"\n"
"/* QMenu ------------------------------------------------------------------ */\n"
"\n"
"QMenu {\n"
"    border: 0px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 2px;\n"
"    background-color: #505F69;\n"
"    color: #F0F0F0;\n"
"    padding-left: 4px;\n"
"    margin-left: 2px;\n"
"    margin-right: 2px;\n"
"}\n"
"\n"
"QMenu::icon {\n"
"    margin: 0px;\n"
"    padding-left:4px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 4px 24px 4px 24px;\n"
"    border: 1px transparent #32414B;  /* reserve space for selection border */\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"\n"
"\n"
"QMenu::indicator {\n"
"    widt"
                        "h: 12px;\n"
"    height: 12px;\n"
"    padding-left:6px;\n"
"}\n"
"\n"
"/* non-exclusive indicator = check box style indicator (see QActionGroup::setExclusive) */\n"
"\n"
"QMenu::indicator:non-exclusive:unchecked {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:unchecked:selected {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_disabled.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:checked {\n"
"    image: url(:/qss_icons/rc/checkbox_checked.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:checked:selected {\n"
"    image: url(:/qss_icons/rc/checkbox_checked_disabled.png);\n"
"}\n"
"\n"
"/* exclusive indicator = radio button style indicator (see QActionGroup::setExclusive) */\n"
"\n"
"QMenu::indicator:exclusive:unchecked {\n"
"    image: url(:/qss_icons/rc/radio_unchecked.png);\n"
"}\n"
"\n"
"QMenu::indicator:exclusive:unchecked:selected {\n"
"    image: url(:/qss_icons/rc/radio_unchecked_disabled.png);\n"
"}\n"
"\n"
"QMenu::indicator:exc"
                        "lusive:checked {\n"
"    image: url(:/qss_icons/rc/radio_checked.png);\n"
"}\n"
"\n"
"QMenu::indicator:exclusive:checked:selected {\n"
"    image: url(:/qss_icons/rc/radio_checked_disabled.png);\n"
"}\n"
"\n"
"QMenu::right-arrow {\n"
"    margin: 5px;\n"
"    image: url(:/qss_icons/rc/right_arrow.png)\n"
"}\n"
"\n"
"/* QAbstractItemView ------------------------------------------------------ */\n"
"\n"
"QAbstractItemView {\n"
"    alternate-background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QAbstractItemView QLineEdit {\n"
"    padding: 2px;\n"
"}\n"
"\n"
"/* QAbstractScrollArea ---------------------------------------------------- */\n"
"\n"
"QAbstractScrollArea {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QAbstractScrollArea:disabled {\n"
"    color: #787878;\n"
"}\n"
"\n"
"/* QScrollArea -------------------------------"
                        "----------------------------- */\n"
"\n"
"QScrollArea QWidget QWidget:disabled {\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"/* QScrollBar ------------------------------------------------------------- */\n"
"\n"
"QScrollBar:horizontal {\n"
"    height: 16px;\n"
"    margin: 2px 16px 2px 16px;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: #787878;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    min-width: 8px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:hover {\n"
"    background-color: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"    border-radius: 4px;\n"
"    min-width: 8px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    margin: 0px 0px 0px 0px;\n"
"    border-image: url(:/qss_icons/rc/right_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
""
                        "QScrollBar::sub-line:horizontal {\n"
"    margin: 0px 3px 0px 3px;\n"
"    border-image: url(:/qss_icons/rc/left_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal:hover,\n"
"QScrollBar::add-line:horizontal:on {\n"
"    border-image: url(:/qss_icons/rc/right_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal:hover,\n"
"QScrollBar::sub-line:horizontal:on {\n"
"    border-image: url(:/qss_icons/rc/left_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal,\n"
"QScrollBar::down-arrow:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QSc"
                        "rollBar:vertical {\n"
"    background-color: #19232D;\n"
"    width: 16px;\n"
"    margin: 16px 2px 16px 2px;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #787878;\n"
"    border: 1px solid #32414B;\n"
"    min-height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"    border-radius: 4px;\n"
"    min-height: 8px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    margin: 3px 0px 3px 0px;\n"
"    border-image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    margin: 3px 0px 3px 0px;\n"
"    border-image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-or"
                        "igin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover,\n"
"QScrollBar::sub-line:vertical:on {\n"
"    border-image: url(:/qss_icons/rc/up_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:hover,\n"
"QScrollBar::add-line:vertical:on {\n"
"    border-image: url(:/qss_icons/rc/down_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical,\n"
"QScrollBar::down-arrow:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"/* QTextEdit--------------------------------------------------------------- */\n"
"\n"
"QTextEdit {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 1px solid #1"
                        "48CD2;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QTextEdit:selected {\n"
"    background: #1464A0;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* QPlainTextEdit --------------------------------------------------------- */\n"
"\n"
"QPlainTextEdit {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"QPlainTextEdit:hover {\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QPlainTextEdit:selected {\n"
"    background: #1464A0;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* QSizeGrip --------------------------------------------------------------- */\n"
"\n"
"QSizeGrip {\n"
"    image: url(:/qss_icons/rc/sizegrip.png);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"/* QStackedWidget --------------------------------------------------------- */\n"
"\n"
"QStackedWidget {\n"
"    padding: 4px;\n"
"    border: 1px solid #32414B;\n"
"    border: 1px solid #19232D;\n"
"}\n"
"\n"
"/* QToolBar -------------------------"
                        "-------------------------------------- */\n"
"\n"
"QToolBar {\n"
"    background-color: #32414B;\n"
"    border-bottom: 1px solid #19232D;\n"
"    padding: 2px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QToolBar QToolButton{\n"
"    background-color: #32414B;\n"
"}\n"
"\n"
"QToolBar::handle:horizontal {\n"
"    width: 6px;\n"
"    image: url(:/qss_icons/rc/Hmovetoolbar.png);\n"
"}\n"
"\n"
"QToolBar::handle:vertical {\n"
"    height: 6px;\n"
"    image: url(:/qss_icons/rc/Vmovetoolbar.png);\n"
"}\n"
"\n"
"QToolBar::separator:horizontal {\n"
"    width: 3px;\n"
"    image: url(:/qss_icons/rc/Hsepartoolbar.png);\n"
"}\n"
"\n"
"QToolBar::separator:vertical {\n"
"    height: 3px;\n"
"    image: url(:/qss_icons/rc/Vsepartoolbar.png);\n"
"}\n"
"\n"
"QToolButton#qt_toolbar_ext_button {\n"
"    background: #32414B;\n"
"    border: 0px;\n"
"    color: #F0F0F0;\n"
"    image: url(:/qss_icons/rc/right_arrow.png);\n"
"}\n"
"\n"
"/* QAbstractSpinBox ------------------------------------------------------- */\n"
"\n"
"QAbstra"
                        "ctSpinBox {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    padding-top: 2px;     /* This fix  103, 111*/\n"
"    padding-bottom: 2px;  /* This fix  103, 111*/\n"
"    padding-left: 4px;\n"
"    padding-right: 4px;\n"
"    border-radius: 4px;\n"
"    /* min-width: 5px; removed to fix 109 */\n"
"}\n"
"\n"
"QAbstractSpinBox:up-button {\n"
"    background-color: transparent #19232D;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #32414B;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow,\n"
"QAbstractSpinBox::up-arrow:disabled,\n"
"QAbstractSpinBox::up-arrow:off {\n"
"    image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow:hover {\n"
"    image: url(:/qss_icons/rc/up_arrow.png);\n"
"}\n"
"\n"
"QAbstractSpinBox:down-button {\n"
"    background-color: transparent #19232D;\n"
"    subcontrol-origin: border;\n"
" "
                        "   subcontrol-position: bottom right;\n"
"    border-left: 1px solid #32414B;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QAbstractSpinBox::down-arrow,\n"
"QAbstractSpinBox::down-arrow:disabled,\n"
"QAbstractSpinBox::down-arrow:off {\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QAbstractSpinBox::down-arrow:hover {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QAbstractSpinBox:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QAbstractSpinBox:selected {\n"
"    background: #1464A0;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* ------------------------------------------------------------------------ */\n"
"/* DISPLAYS --------------------------------------------------------------- */\n"
"/* ------------------------------------------------------------------------ */\n"
"\n"
"/* QLabel ----------------------------------------------------------------- */\n"
"\n"
"QLabel {\n"
"    background-color: #19232D;\n"
""
                        "    border: 0px solid #32414B;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"    color: #F0F0F0\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    background-color: #19232D;\n"
"    border: 0px solid #32414B;\n"
"    color: #787878;\n"
"}\n"
"\n"
"/* QTextBrowser ----------------------------------------------------------- */\n"
"\n"
"QTextBrowser {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QTextBrowser:disabled {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QTextBrowser:hover,\n"
"QTextBrowser:!hover,\n"
"QTextBrowser::selected,\n"
"QTextBrowser::pressed {\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"/* QGraphicsView --------------------------------------------------------- */\n"
"\n"
"QGraphicsView {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"}\n"
""
                        "\n"
"QGraphicsView:disabled {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QGraphicsView:hover,\n"
"QGraphicsView:!hover,\n"
"QGraphicsView::selected,\n"
"QGraphicsView::pressed {\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"/* QCalendarWidget -------------------------------------------------------- */\n"
"\n"
"QCalendarWidget {\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QCalendarWidget:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"}\n"
"\n"
"/* QLCDNumber ------------------------------------------------------------- */\n"
"\n"
"QLCDNumber {\n"
"    background-color: #19232D;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QLCDNumber:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"}\n"
"\n"
"/* QProgressBar ----------------------------------------------------------- */\n"
"\n"
"QProgressBar {\n"
"    background-color: #19232D;\n"
"    b"
                        "order: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar:disabled {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #1464A0;\n"
"    color: #19232D;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QProgressBar::chunk:disabled {\n"
"    background-color: #14506E;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"\n"
"/* ------------------------------------------------------------------------ */\n"
"/* BUTTONS ---------------------------------------------------------------- */\n"
"/* ------------------------------------------------------------------------ */\n"
"\n"
"/* QPushButton ------------------------------------------------------------ */\n"
"\n"
"QPushButton {\n"
"    background-color: #505F69 ;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
""
                        "    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"\n"
"QPushButton:checked {\n"
"    background-color: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:checked:disabled {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #787878;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    bottom: 4px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:checked:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
""
                        "}\n"
"\n"
"QPushButton:selected,\n"
"QPushButton:checked:selected{\n"
"    background: #1464A0;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* QToolButton ------------------------------------------------------------ */\n"
"\n"
"QToolButton {\n"
"    background-color: transparent;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    margin: 0px;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"}\n"
"\n"
"QToolButton:disabled {\n"
"    border: 1px solid #32414B;\n"
"}\n"
"\n"
"QToolButton:hover,\n"
"QToolButton:checked:hover{\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"/* the subcontrols below are used only in the MenuButtonPopup mode */\n"
"\n"
"QToolButton[popupMode=\"1\"] {\n"
"    padding: 2px;\n"
"    padding-right: 12px;     /* only for MenuButtonPopup */\n"
"    border: 1px solid #32414B;   /* make way for the popup button */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* The subcontrol below is used only"
                        " in the InstantPopup or DelayedPopup mode */\n"
"\n"
"QToolButton[popupMode=\"2\"] {\n"
"    padding: 2px;\n"
"    padding-right: 12px;      /* only for InstantPopup */\n"
"    border: 1px solid #32414B;    /* make way for the popup button */\n"
"}\n"
"\n"
"QToolButton::menu-button {\n"
"    padding: 2px;\n"
"    border-radius: 4px;\n"
"    border: 1px solid #32414B;\n"
"    border-top-right-radius: 4px;\n"
"    border-bottom-right-radius: 4px;\n"
"    /* 16px width + 4px for border = 20px allocated above */\n"
"    width: 16px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QToolButton::menu-button:hover,\n"
"QToolButton::menu-button:checked:hover {\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QToolButton::menu-indicator {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"    top: -8px;     /* shift it a bit */\n"
"    left: -4px;    /* shift it a bit */\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
"    border: 1p"
                        "x solid #32414B;\n"
"}\n"
"\n"
"/* QCommandLinkButton ----------------------------------------------------- */\n"
"\n"
"QCommandLinkButton {\n"
"    background-color: transparent;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 0px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QCommandLinkButton:disabled {\n"
"    background-color: transparent;\n"
"    color: #787878;\n"
"}\n"
"\n"
"/* ------------------------------------------------------------------------ */\n"
"/* INPUTS - NO FIELDS ----------------------------------------------------- */\n"
"/* ------------------------------------------------------------------------ */\n"
"\n"
"/* QCombobox -------------------------------------------------------------- */\n"
"\n"
"QComboBox {\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    selection-background-color: #1464A0;\n"
"    padding-top: 2px;     /* This fix  #103, #111*/\n"
"    padding-bottom: 2px;  /* This fix  #103, #111*/\n"
"    padding-le"
                        "ft: 4px;\n"
"    padding-right: 4px;\n"
"    /* min-width: 75px;  removed to fix 109 */\n"
"}\n"
"\n"
"QComboBox:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"}\n"
"\n"
"QComboBox:hover{\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    selection-background-color: #19232D;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #19232D;\n"
"    border-radius: 4px;\n"
"    border: 1px solid #32414B;\n"
"    selection-color: #148CD2;\n"
"    selection-background-color: #32414B;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left-width: 0px;\n"
"    border-left-color: #32414B;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on,\n"
"QComboBox::down-ar"
                        "row:hover,\n"
"QComboBox::down-arrow:focus {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"/* QSlider ---------------------------------------------------------------- */\n"
"\n"
"QSlider:disabled {\n"
"    background: #19232D;\n"
"}\n"
"\n"
"QSlider:focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #148CD2;\n"
""
                        "    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: 0 -8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"/* QLine ------------------------------------------------------------------ */\n"
"\n"
"QLineEdit {\n"
"    background-color: #19232D;\n"
"    padding-top: 2px;     /* This QLineEdit fix  103, 111 */\n"
"    padding-bottom: 2px;  /* T"
                        "his QLineEdit fix  103, 111 */\n"
"    padding-left: 4px;\n"
"    padding-right: 4px;\n"
"    border-style: solid;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #19232D;\n"
"    color: #787878;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}\n"
"\n"
"QLineEdit:selected{\n"
"    background: #1464A0;\n"
"    color: #32414B;\n"
"}\n"
"\n"
"/* QTabWiget -------------------------------------------------------------- */\n"
"\n"
"QTabWidget {\n"
"    padding: 2px;\n"
"    selection-background-color: #32414B;\n"
"}\n"
"\n"
"QTabWidget QFrame{\n"
"    border: 0;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QTabWidget::pane:selected {\n"
"    background-color: #32414B;\n"
"    border: 1px solid #1464A0;\n"
"}\n"
"\n"
"/* QTabBar ----------------------------------"
                        "------------------------------ */\n"
"\n"
"QTabBar {\n"
"    qproperty-drawBase: 0;\n"
"    border-radius: 4px;\n"
"    margin: 0px;\n"
"    padding: 2px;\n"
"    border: 0;\n"
"\n"
"    /* left: 5px; move to the right by 5px - removed for fix */\n"
"    }\n"
"\n"
"QTabBar::close-button {\n"
"    border: 0;\n"
"    margin: 2px;\n"
"    padding: 0;\n"
"    image: url(:/qss_icons/rc/close.png);\n"
"}\n"
"\n"
"QTabBar::close-button:hover {\n"
"    image: url(:/qss_icons/rc/close-hover.png);\n"
"}\n"
"\n"
"QTabBar::close-button:pressed {\n"
"    image: url(:/qss_icons/rc/close-pressed.png);\n"
"}\n"
"\n"
"/* QTabBar::tab - selected ----------------------------------------------- */\n"
"\n"
"QTabBar::tab:top:selected:disabled {\n"
"    border-bottom: 3px solid #14506E;\n"
"    color: #787878;\n"
"    background-color: #32414B;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected:disabled {\n"
"    border-top: 3px solid #14506E;\n"
"    color: #787878;\n"
"    background-color: #32414B;\n"
"}\n"
"\n"
"QTabBar::tab:left:selec"
                        "ted:disabled {\n"
"    border-left: 3px solid #14506E;\n"
"    color: #787878;\n"
"    background-color: #32414B;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected:disabled {\n"
"    border-right: 3px solid #14506E;\n"
"    color: #787878;\n"
"    background-color: #32414B;\n"
"}\n"
"\n"
"/* QTabBar::tab - !selected and disabled ---------------------------------- */\n"
"\n"
"QTabBar::tab:top:!selected:disabled {\n"
"    border-bottom: 3px solid #19232D;\n"
"    color: #787878;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected:disabled {\n"
"    border-top: 3px solid #19232D;\n"
"    color: #787878;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected:disabled {\n"
"    border-right: 3px solid #19232D;\n"
"    color: #787878;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected:disabled {\n"
"    border-left: 3px solid #19232D;\n"
"    color: #787878;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"/* QTabBar::tab - selected -----------"
                        "------------------------------------ */\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    border-bottom: 2px solid #19232D;\n"
"    margin-top: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    border-top: 2px solid #19232D;\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    border-left: 2px solid #19232D;\n"
"    margin-right: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    border-right: 2px solid #19232D;\n"
"    margin-left: 2px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top {\n"
"    background-color: #32414B;\n"
"    color: #F0F0F0;\n"
"    margin-left: 2px;\n"
"    padding-left: 4px;\n"
"    padding-right: 4px;\n"
"    padding-top: 2px;\n"
"    padding-bottom: 2px;\n"
"    min-width: 5px;\n"
"    border-bottom: 3px solid #32414B;\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    background-color: #505F69;\n"
"    color: #F0F0F0;\n"
"    border-bottom: 3px solid #1464A0;\n"
"    border-top-lef"
                        "t-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected:hover {\n"
"    border: 1px solid #148CD2;\n"
"    border-bottom: 3px solid #148CD2;\n"
"}\n"
"\n"
"QTabBar::tab:bottom {\n"
"    color: #F0F0F0;\n"
"    border-top: 3px solid #32414B;\n"
"    background-color: #32414B;\n"
"    margin-left: 2px;\n"
"    padding-left: 4px;\n"
"    padding-right: 4px;\n"
"    padding-top: 2px;\n"
"    padding-bottom: 2px;\n"
"    border-bottom-left-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"    min-width: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    color: #F0F0F0;\n"
"    background-color: #505F69;\n"
"    border-top: 3px solid #1464A0;\n"
"    border-bottom-left-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected:hover {\n"
"    border: 1px solid #148CD2;\n"
"    border-top: 3px solid #148CD2;\n"
"}\n"
"\n"
"QTabBar::tab:left {\n"
"    color: #F0F0F0;\n"
"    background-color: #32414B;\n"
"    margin-top: 2px"
                        ";\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"    padding-top: 4px;\n"
"    padding-bottom: 4px;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"    min-height: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    color: #F0F0F0;\n"
"    background-color: #505F69;\n"
"    border-left: 3px solid #1464A0;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected:hover {\n"
"    border: 1px solid #148CD2;\n"
"    border-left: 3px solid #148CD2;\n"
"}\n"
"\n"
"QTabBar::tab:right {\n"
"    color: #F0F0F0;\n"
"    background-color: #32414B;\n"
"    margin-top: 2px;\n"
"    padding-left: 2px;\n"
"    padding-right: 2px;\n"
"    padding-top: 4px;\n"
"    padding-bottom: 4px;\n"
"    border-top-left-radius: 3px;\n"
"    border-bottom-left-radius: 3px;\n"
"    min-height: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    color: #F0F0F0;\n"
"    background-color: #505F69;\n"
"    border-right: 3px"
                        " solid #1464A0;\n"
"    border-top-left-radius: 3px;\n"
"    border-bottom-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selecte"));
        MainWindow->setAnimated(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionHow_To_Use = new QAction(MainWindow);
        actionHow_To_Use->setObjectName(QStringLiteral("actionHow_To_Use"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 90, 511, 261));
        SSID_lineEdit = new QLineEdit(groupBox);
        SSID_lineEdit->setObjectName(QStringLiteral("SSID_lineEdit"));
        SSID_lineEdit->setGeometry(QRect(80, 30, 111, 20));
        SSID_lineEdit->setStyleSheet(QStringLiteral(""));
        password_lineEdit = new QLineEdit(groupBox);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(80, 70, 111, 20));
        password_lineEdit->setEchoMode(QLineEdit::Normal);
        static_IP_lineEdit = new QLineEdit(groupBox);
        static_IP_lineEdit->setObjectName(QStringLiteral("static_IP_lineEdit"));
        static_IP_lineEdit->setGeometry(QRect(80, 110, 111, 20));
        gateway_lineEdit = new QLineEdit(groupBox);
        gateway_lineEdit->setObjectName(QStringLiteral("gateway_lineEdit"));
        gateway_lineEdit->setGeometry(QRect(80, 150, 111, 20));
        gateway_lineEdit->setStyleSheet(QStringLiteral(""));
        subnet_lineEdit = new QLineEdit(groupBox);
        subnet_lineEdit->setObjectName(QStringLiteral("subnet_lineEdit"));
        subnet_lineEdit->setGeometry(QRect(80, 190, 111, 20));
        port_lineEdit = new QLineEdit(groupBox);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));
        port_lineEdit->setGeometry(QRect(80, 230, 111, 20));
        SSID_label = new QLabel(groupBox);
        SSID_label->setObjectName(QStringLiteral("SSID_label"));
        SSID_label->setGeometry(QRect(10, 30, 61, 20));
        password_label = new QLabel(groupBox);
        password_label->setObjectName(QStringLiteral("password_label"));
        password_label->setGeometry(QRect(10, 70, 61, 21));
        static_IP_label = new QLabel(groupBox);
        static_IP_label->setObjectName(QStringLiteral("static_IP_label"));
        static_IP_label->setGeometry(QRect(10, 110, 61, 21));
        gateway_label = new QLabel(groupBox);
        gateway_label->setObjectName(QStringLiteral("gateway_label"));
        gateway_label->setGeometry(QRect(10, 150, 61, 21));
        subnet_label = new QLabel(groupBox);
        subnet_label->setObjectName(QStringLiteral("subnet_label"));
        subnet_label->setGeometry(QRect(10, 190, 61, 21));
        port_label = new QLabel(groupBox);
        port_label->setObjectName(QStringLiteral("port_label"));
        port_label->setGeometry(QRect(10, 230, 61, 21));
        baurate_label = new QLabel(groupBox);
        baurate_label->setObjectName(QStringLiteral("baurate_label"));
        baurate_label->setGeometry(QRect(270, 30, 61, 20));
        time_life_label = new QLabel(groupBox);
        time_life_label->setObjectName(QStringLiteral("time_life_label"));
        time_life_label->setGeometry(QRect(270, 150, 61, 20));
        baudrate_lineEdit = new QLineEdit(groupBox);
        baudrate_lineEdit->setObjectName(QStringLiteral("baudrate_lineEdit"));
        baudrate_lineEdit->setGeometry(QRect(340, 30, 111, 20));
        baudrate_lineEdit->setStyleSheet(QStringLiteral(""));
        time_life_lineEdit = new QLineEdit(groupBox);
        time_life_lineEdit->setObjectName(QStringLiteral("time_life_lineEdit"));
        time_life_lineEdit->setGeometry(QRect(340, 150, 111, 20));
        time_life_lineEdit->setStyleSheet(QStringLiteral(""));
        SSID_send_pushButton = new QPushButton(groupBox);
        SSID_send_pushButton->setObjectName(QStringLiteral("SSID_send_pushButton"));
        SSID_send_pushButton->setGeometry(QRect(200, 30, 41, 23));
        password_send_pushButton = new QPushButton(groupBox);
        password_send_pushButton->setObjectName(QStringLiteral("password_send_pushButton"));
        password_send_pushButton->setGeometry(QRect(200, 70, 41, 23));
        static_IP_send_pushButton = new QPushButton(groupBox);
        static_IP_send_pushButton->setObjectName(QStringLiteral("static_IP_send_pushButton"));
        static_IP_send_pushButton->setGeometry(QRect(200, 110, 41, 23));
        gateway_send_pushButton = new QPushButton(groupBox);
        gateway_send_pushButton->setObjectName(QStringLiteral("gateway_send_pushButton"));
        gateway_send_pushButton->setGeometry(QRect(200, 150, 41, 23));
        subnet_send_pushButton = new QPushButton(groupBox);
        subnet_send_pushButton->setObjectName(QStringLiteral("subnet_send_pushButton"));
        subnet_send_pushButton->setGeometry(QRect(200, 190, 41, 23));
        port_send_pushButton = new QPushButton(groupBox);
        port_send_pushButton->setObjectName(QStringLiteral("port_send_pushButton"));
        port_send_pushButton->setGeometry(QRect(200, 230, 41, 23));
        baudrate_send_pushButton = new QPushButton(groupBox);
        baudrate_send_pushButton->setObjectName(QStringLiteral("baudrate_send_pushButton"));
        baudrate_send_pushButton->setGeometry(QRect(460, 30, 41, 23));
        time_life_send_pushButton = new QPushButton(groupBox);
        time_life_send_pushButton->setObjectName(QStringLiteral("time_life_send_pushButton"));
        time_life_send_pushButton->setGeometry(QRect(460, 150, 41, 23));
        serial_mode_lineEdit = new QLineEdit(groupBox);
        serial_mode_lineEdit->setObjectName(QStringLiteral("serial_mode_lineEdit"));
        serial_mode_lineEdit->setGeometry(QRect(340, 70, 111, 20));
        serial_mode_lineEdit->setStyleSheet(QStringLiteral(""));
        serial_mode_label = new QLabel(groupBox);
        serial_mode_label->setObjectName(QStringLiteral("serial_mode_label"));
        serial_mode_label->setGeometry(QRect(270, 70, 61, 20));
        serial_mode_send_pushButton = new QPushButton(groupBox);
        serial_mode_send_pushButton->setObjectName(QStringLiteral("serial_mode_send_pushButton"));
        serial_mode_send_pushButton->setGeometry(QRect(460, 70, 41, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(590, 90, 311, 421));
        file_path_lineEdit = new QLineEdit(groupBox_2);
        file_path_lineEdit->setObjectName(QStringLiteral("file_path_lineEdit"));
        file_path_lineEdit->setGeometry(QRect(70, 30, 231, 20));
        load_file_content_pushButton = new QPushButton(groupBox_2);
        load_file_content_pushButton->setObjectName(QStringLiteral("load_file_content_pushButton"));
        load_file_content_pushButton->setGeometry(QRect(20, 60, 111, 23));
        save_file_content_pushButton = new QPushButton(groupBox_2);
        save_file_content_pushButton->setObjectName(QStringLiteral("save_file_content_pushButton"));
        save_file_content_pushButton->setGeometry(QRect(190, 60, 101, 23));
        file_content_plainTextEdit = new QPlainTextEdit(groupBox_2);
        file_content_plainTextEdit->setObjectName(QStringLiteral("file_content_plainTextEdit"));
        file_content_plainTextEdit->setGeometry(QRect(10, 120, 291, 101));
        serial_content_plainTextEdit = new QPlainTextEdit(groupBox_2);
        serial_content_plainTextEdit->setObjectName(QStringLiteral("serial_content_plainTextEdit"));
        serial_content_plainTextEdit->setGeometry(QRect(10, 260, 291, 151));
        file_path_label = new QLabel(groupBox_2);
        file_path_label->setObjectName(QStringLiteral("file_path_label"));
        file_path_label->setGeometry(QRect(10, 30, 51, 21));
        file_content_label = new QLabel(groupBox_2);
        file_content_label->setObjectName(QStringLiteral("file_content_label"));
        file_content_label->setGeometry(QRect(10, 90, 71, 21));
        serial_content_label = new QLabel(groupBox_2);
        serial_content_label->setObjectName(QStringLiteral("serial_content_label"));
        serial_content_label->setGeometry(QRect(10, 230, 81, 21));
        file_content_clear_all_pushButton = new QPushButton(groupBox_2);
        file_content_clear_all_pushButton->setObjectName(QStringLiteral("file_content_clear_all_pushButton"));
        file_content_clear_all_pushButton->setGeometry(QRect(80, 90, 51, 23));
        serial_content_clear_all_pushButton = new QPushButton(groupBox_2);
        serial_content_clear_all_pushButton->setObjectName(QStringLiteral("serial_content_clear_all_pushButton"));
        serial_content_clear_all_pushButton->setGeometry(QRect(90, 230, 51, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 410, 511, 101));
        COM_open_pushButton = new QPushButton(groupBox_3);
        COM_open_pushButton->setObjectName(QStringLiteral("COM_open_pushButton"));
        COM_open_pushButton->setGeometry(QRect(270, 30, 91, 23));
        COM_close_pushButton = new QPushButton(groupBox_3);
        COM_close_pushButton->setObjectName(QStringLiteral("COM_close_pushButton"));
        COM_close_pushButton->setGeometry(QRect(400, 30, 101, 23));
        submit_pushButton = new QPushButton(groupBox_3);
        submit_pushButton->setObjectName(QStringLiteral("submit_pushButton"));
        submit_pushButton->setGeometry(QRect(270, 60, 231, 23));
        COM_status_label = new QLabel(groupBox_3);
        COM_status_label->setObjectName(QStringLiteral("COM_status_label"));
        COM_status_label->setGeometry(QRect(10, 60, 81, 21));
        serial_available_port_comboBox = new QComboBox(groupBox_3);
        serial_available_port_comboBox->setObjectName(QStringLiteral("serial_available_port_comboBox"));
        serial_available_port_comboBox->setGeometry(QRect(10, 30, 121, 22));
        serial_baudrate_comboBox = new QComboBox(groupBox_3);
        serial_baudrate_comboBox->setObjectName(QStringLiteral("serial_baudrate_comboBox"));
        serial_baudrate_comboBox->setGeometry(QRect(140, 30, 101, 22));
        serial_mode_comboBox = new QComboBox(groupBox_3);
        serial_mode_comboBox->setObjectName(QStringLiteral("serial_mode_comboBox"));
        serial_mode_comboBox->setGeometry(QRect(140, 60, 101, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 531, 41));
        label->setPixmap(QPixmap(QString::fromUtf8("title.png")));
        input_field_to_file_content_pushButton = new QPushButton(centralWidget);
        input_field_to_file_content_pushButton->setObjectName(QStringLiteral("input_field_to_file_content_pushButton"));
        input_field_to_file_content_pushButton->setGeometry(QRect(540, 230, 31, 23));
        file_content_to_input_field_pushButton = new QPushButton(centralWidget);
        file_content_to_input_field_pushButton->setObjectName(QStringLiteral("file_content_to_input_field_pushButton"));
        file_content_to_input_field_pushButton->setGeometry(QRect(540, 260, 31, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 70, 151, 20));
        MainWindow->setCentralWidget(centralWidget);
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        label->raise();
        input_field_to_file_content_pushButton->raise();
        file_content_to_input_field_pushButton->raise();
        label_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 30));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(SSID_lineEdit, password_lineEdit);
        QWidget::setTabOrder(password_lineEdit, static_IP_lineEdit);
        QWidget::setTabOrder(static_IP_lineEdit, gateway_lineEdit);
        QWidget::setTabOrder(gateway_lineEdit, subnet_lineEdit);
        QWidget::setTabOrder(subnet_lineEdit, port_lineEdit);
        QWidget::setTabOrder(port_lineEdit, file_path_lineEdit);
        QWidget::setTabOrder(file_path_lineEdit, load_file_content_pushButton);
        QWidget::setTabOrder(load_file_content_pushButton, save_file_content_pushButton);
        QWidget::setTabOrder(save_file_content_pushButton, file_content_plainTextEdit);
        QWidget::setTabOrder(file_content_plainTextEdit, COM_open_pushButton);
        QWidget::setTabOrder(COM_open_pushButton, COM_close_pushButton);
        QWidget::setTabOrder(COM_close_pushButton, submit_pushButton);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionHow_To_Use);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ATB-Bico-Configuration-App", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionHow_To_Use->setText(QApplication::translate("MainWindow", "How To Use", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Input Field", Q_NULLPTR));
        SSID_label->setText(QApplication::translate("MainWindow", "SSID", Q_NULLPTR));
        password_label->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        static_IP_label->setText(QApplication::translate("MainWindow", "Static_IP", Q_NULLPTR));
        gateway_label->setText(QApplication::translate("MainWindow", "Gateway", Q_NULLPTR));
        subnet_label->setText(QApplication::translate("MainWindow", "Subnet", Q_NULLPTR));
        port_label->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        baurate_label->setText(QApplication::translate("MainWindow", "Baudrate", Q_NULLPTR));
        time_life_label->setText(QApplication::translate("MainWindow", "Time Life", Q_NULLPTR));
        SSID_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        password_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        static_IP_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        gateway_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        subnet_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        port_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        baudrate_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        time_life_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        serial_mode_label->setText(QApplication::translate("MainWindow", "Serial Mode", Q_NULLPTR));
        serial_mode_send_pushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "File and Display Field", Q_NULLPTR));
        load_file_content_pushButton->setText(QApplication::translate("MainWindow", "Load File", Q_NULLPTR));
        save_file_content_pushButton->setText(QApplication::translate("MainWindow", "Save File", Q_NULLPTR));
        file_path_label->setText(QApplication::translate("MainWindow", "File Path", Q_NULLPTR));
        file_content_label->setText(QApplication::translate("MainWindow", "File Content", Q_NULLPTR));
        serial_content_label->setText(QApplication::translate("MainWindow", "Serial Content", Q_NULLPTR));
        file_content_clear_all_pushButton->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
        serial_content_clear_all_pushButton->setText(QApplication::translate("MainWindow", "Clear All", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "COM Port Field", Q_NULLPTR));
        COM_open_pushButton->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        COM_close_pushButton->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        submit_pushButton->setText(QApplication::translate("MainWindow", "Send File Content", Q_NULLPTR));
        COM_status_label->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        serial_available_port_comboBox->clear();
        serial_available_port_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Refresh", Q_NULLPTR)
        );
        serial_baudrate_comboBox->clear();
        serial_baudrate_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
        );
        serial_mode_comboBox->clear();
        serial_mode_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Empty", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8N1 ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5N1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6N1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7N1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5N2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6N2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7N2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8N2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5E1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6E1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7E1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8E1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5E2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6E2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7E2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8E2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5O1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6O1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7O1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8O1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_5O2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_6O2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_7O2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SERIAL_8O2", Q_NULLPTR)
        );
        label->setText(QString());
        input_field_to_file_content_pushButton->setText(QApplication::translate("MainWindow", "->", Q_NULLPTR));
        file_content_to_input_field_pushButton->setText(QApplication::translate("MainWindow", "<-", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">Power by Autobase Vietnam</span></p></body></html>", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
