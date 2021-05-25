#include "painterwidget.h"
#include "utility"
PainterWidget::PainterWidget(QWidget *parent) : QWidget(parent)
{

}

void PainterWidget::AddFigure(figure* fg)
{
    data_fg.insert(data_fg.end(),fg);
    update();
}

void PainterWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    for(const auto& l:data_fg){
        l->draw(painter);
    }
}

void PainterWidget::clear()
{
    for(auto l:data_fg){
        delete l;
    }
    data_fg.clear();
}

PainterWidget::~PainterWidget()
{
    for(auto l:data_fg){
        delete l;
    }
    data_fg.clear();
}
