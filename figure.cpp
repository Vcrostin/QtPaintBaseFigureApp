#include "figure.h"



figure::figure()
{
}

figure::figure(QColor qc, QColor qc2nd):qb(qc),qbChose(qc2nd)
{

}

void figure::setBrushColors(QPainter &qp) const
{
    if(is_chosen){
        qp.setBrush(qb);
    }
    else {
        qp.setBrush(qbChose);
    }
}

figure::~figure()
{

}
