#include "welcomewindow.h"
#include "loginwindow.h"
#include "ui_welcomewindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent, QString username, int age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
