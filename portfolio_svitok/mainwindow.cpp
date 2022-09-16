#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>

void MainWindow::setFormStyle()
{
    // Скрываем элементы управления и рамку окна...
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);

    // Включаем прозрачность главной формы...
    setAttribute(Qt::WA_TranslucentBackground);

    // Задаём параметры прозрачности...
    QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect -> setBlurRadius(9.0);
    shadowEffect -> setColor(QColor(0, 0, 0, 160));
    shadowEffect -> setOffset(4.0);
    ui -> widget -> setGraphicsEffect(shadowEffect);
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui -> setupUi(this);
    this -> setFormStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

