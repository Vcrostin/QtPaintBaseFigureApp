#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include "QPainter"
class circle : public figure
{
public:
    circle(int x, int y, int r);

    void draw(QPainter& qp)const override;

private:
    int x,y,r;
};

#endif // CIRCLE_H
