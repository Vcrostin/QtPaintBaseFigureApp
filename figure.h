#ifndef FIGURE_H
#define FIGURE_H
#include "QPainter"

class figure
{
public:
    figure();

    virtual void draw(QPainter& qp)const;

    virtual ~figure();
};

#endif // FIGURE_H
