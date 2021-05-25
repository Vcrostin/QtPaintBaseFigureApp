#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circle.h"
#include "multiangle.h"
#include "rectangle.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{
    ui->widget->clear();
    ui->widget->AddFigure(static_cast<figure*>(new circle(100,100,30)));
    ui->widget->AddFigure(dynamic_cast<figure*>(new rectangle(50,50,100,30)));
    ui->widget->AddFigure(dynamic_cast<figure*>(new multiangle({QPointF{10.0, 80.0},QPointF{20.0,10.0},QPointF{80.0,30.0}})));
    ui->widget->update();
}
