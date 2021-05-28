#include "rectangle.h"

rectangle::rectangle(int x, int y, int width, int height):figure::figure(QColor("blue"),QColor("black")),x(x),y(y),width(width),height(height)
{

}

void rectangle::draw(QPainter &qp) const
{
    setBrushColors(qp);
    qp.drawRect(x,y,width,height);
}

bool rectangle::is_inside(const QPoint &qp) const
{
    if(((qp.x()-x)>=0 && (qp.x()-x)<=width) && ((qp.y()-y >= 0) && (qp.y()-y)<=height)){
        return true;
    }
    else
    {
        return false;
    }
}

QString rectangle::getInfo() const
{
    QString qs;
    qs = "Upper left point x = " + QString::number(x) + " y = " + QString::number(y) + " width = " + QString::number(width) + " height = " + QString::number(height);
    return qs;
}
