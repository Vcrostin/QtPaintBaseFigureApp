#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"
#include "vector"
class multiangle:public figure
{
public:
    multiangle(std::vector<QPointF> digits);

    void draw(QPainter& qp)const override;

private:
    std::vector<QPointF> digits;
};

#endif // TRIANGLE_H
