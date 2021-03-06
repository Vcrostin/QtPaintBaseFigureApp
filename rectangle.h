#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
class rectangle : public figure
{
public:
    rectangle(int x, int y, int width, int height);

    void draw(QPainter& qp)const override;

    bool is_inside(const QPoint& qp)const override;

    QString getInfo() const override;

private:
    int x,y,width,height;
};

#endif // RECTANGLE_H
