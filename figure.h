#ifndef FIGURE_H
#define FIGURE_H
#include "QPainter"

class figure
{
protected:
    QBrush qb;
    QBrush qbChose;
    bool is_chosen = true;
public:
    figure();

    figure(QColor qc, QColor qc2nd);

    virtual void draw(QPainter& qp)const = 0;

    void setBrushColors(QPainter& qp)const;

    inline void setChose(bool b){
        is_chosen = b;
    }

    inline void changeFirstColor(const QColor& qc){
        qb.setColor(qc);
    }

    inline void changeSecondColor(const QColor& qc){
        qbChose.setColor(qc);
    }

    virtual bool is_inside(const QPoint& qp) const = 0;

    virtual QString getInfo() const = 0;

    inline QColor getFirstColor(){
        return qb.color();
    }

    virtual ~figure();
};

#endif // FIGURE_H
