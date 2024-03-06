#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"
#include "Users.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
