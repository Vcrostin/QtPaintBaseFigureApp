#include "rectangle.h"

rectangle::rectangle(int x, int y, int width, int height):x(x),y(y),width(width),height(height)
{

}

void rectangle::draw(QPainter &qp) const
{
    qp.drawRect(x,y,width,height);
}
