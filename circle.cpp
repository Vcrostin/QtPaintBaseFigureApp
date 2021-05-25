#include "circle.h"


circle::circle(int x, int y, int r):x(x),y(y),r(r)
{

}

void circle::draw(QPainter& qp) const
{
    qp.drawEllipse(x,y,r,r);
}
