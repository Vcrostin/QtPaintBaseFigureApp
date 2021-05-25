#include "multiangle.h"
#include "algorithm"
#include "utility"
multiangle::multiangle(std::vector<QPointF> digits):digits(std::move(digits))
{

}

void multiangle::draw(QPainter& qp) const
{
    qp.drawConvexPolygon(&digits[0],static_cast<int>(digits.size()));
}

