#ifndef PAINTERWIDGET_H
#define PAINTERWIDGET_H

#include <QWidget>
#include <list>
#include <figure.h>
#include "functional"
class PainterWidget : public QWidget
{
    Q_OBJECT
private:
    std::list<figure*> data_fg;
public:
    explicit PainterWidget(QWidget *parent = nullptr);

    void AddFigure(figure* fg);
    void paintEvent(QPaintEvent*) override;

    void clear();

    ~PainterWidget()override;

signals:

public slots:
};

#endif // PAINTERWIDGET_H
