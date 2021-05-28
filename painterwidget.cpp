#include "painterwidget.h"
#include "utility"
#include "QPainter"
#include "QMouseEvent"
#include <memory>
#include <QMessageBox>
PainterWidget::PainterWidget(QWidget *parent) : QWidget(parent)
{
    setMouseTracking(true);
}

void PainterWidget::AddFigure(figure* fg)
{
    data_fg.insert(data_fg.end(),std::unique_ptr<figure>(fg));
    update();
}

void PainterWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    for(const auto& l:data_fg){
        l->draw(painter);
    }
}

void PainterWidget::mouseMoveEvent(QMouseEvent *event)
{
    auto pt = event->pos();
    int counter = 0;
    for(const auto& c:data_fg){
        if(counter == 0 && c->is_inside(pt)){
            c->setChose(false);
            counter++;
        }
        else {
            c->setChose(true);
        }
    }
    update();
}

void PainterWidget::mousePressEvent(QMouseEvent *event)
{
    auto pt = event->pos();
    if(event->button() == Qt::RightButton){
        for(const auto& c:data_fg){
            if(c->is_inside(pt)){
                QMessageBox qmb;
                qmb.setText(c->getInfo());
                qmb.setStandardButtons(QMessageBox::Ok);
                qmb.setDefaultButton(QMessageBox::Ok);
                qmb.exec();
                break;
            }
        }
    }
}

void PainterWidget::clear()
{
    data_fg.clear();
}

PainterWidget::~PainterWidget()
{
    data_fg.clear();
}
