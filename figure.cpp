#include "figure.h"



figure::figure()
{

}

void figure::draw(QPainter &qp) const
{
    qp.drawLine(0,0,100,100);
}

figure::~figure()
{

}
