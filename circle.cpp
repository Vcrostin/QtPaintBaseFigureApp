#include "circle.h"
#include "math.h"

circle::circle(int x, int y, int r):figure::figure(QColor("red"),QColor("black")),x(x),y(y),r(r)
{
}

void circle::draw(QPainter& qp) const
{
    setBrushColors(qp);
    qp.drawEllipse(x,y,r,r);
}

bool circle::is_inside(const QPoint &qp) const
{
    if((qp.x()-x)*(qp.x()-x) + (qp.y()-y)*(qp.y()-y) <= r*r){
        return true;
    }
    else
    {
        return false;
    }
}

QString circle::getInfo() const
{
    QString qs;
    qs = "Circle x coord:" + QString::number(x) + " y coord:" + QString::number(y) + " rad:" + QString::number(r);
    return qs;
}
