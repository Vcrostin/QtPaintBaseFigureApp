#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"
#include "vector"
class multiangle:public figure
{
public:
    multiangle(std::vector<QPointF> digits);

    void draw(QPainter& qp)const override;

    bool is_inside(const QPoint& qp)const override;

    QString getInfo() const override;

private:
    std::vector<QPointF> digits;

    bool pnpoly(float x, float y)const;
};

#endif // TRIANGLE_H
