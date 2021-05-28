#include "multiangle.h"
#include "algorithm"
#include "utility"
multiangle::multiangle(std::vector<QPointF> digits):figure::figure(QColor("green"),QColor("black")),digits(std::move(digits))
{

}

void multiangle::draw(QPainter& qp) const
{
    setBrushColors(qp);
    qp.drawConvexPolygon(&digits[0],static_cast<int>(digits.size()));
}

bool multiangle::pnpoly(float x, float y) const
{
  bool c = false;
  for (size_t i = 0, j = digits.size() - 1; i < digits.size(); j = i++)
  {
    if ((((digits[i].y() <= y) && (y < digits[j].y())) || ((digits[j].y() <= y) && (y < digits[i].y()))) &&
      (((digits[j].y() - digits[i].y()) != 0) && (x > ((digits[j].x() - digits[i].x()) * (y - digits[i].y()) / (digits[j].y() - digits[i].y()) + digits[i].x()))))
        c = !c;
  }
  return c;

}

bool multiangle::is_inside(const QPoint &qp) const
{
    if(pnpoly(qp.x(),qp.y())){
        return true;
    }
    else
    {
        return false;
    }
}

QString multiangle::getInfo() const
{
    QString qs;
    qs = "Multiangle nums adge:" + QString::number(digits.size()) + "\n";
    for(const auto& d : digits){
        qs += "x = " + QString::number(d.x()) + " y =" + QString::number(d.y()) + "\n";
    }
    return qs;
}

