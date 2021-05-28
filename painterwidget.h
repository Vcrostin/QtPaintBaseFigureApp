#ifndef PAINTERWIDGET_H
#define PAINTERWIDGET_H

#include <QWidget>
#include <list>
#include <figure.h>
#include <memory>
#include "functional"
class PainterWidget : public QWidget
{
    Q_OBJECT
private:
    std::list<std::unique_ptr<figure>> data_fg;
public:
    explicit PainterWidget(QWidget *parent = nullptr);

    void AddFigure(figure* fg);

    void paintEvent(QPaintEvent*) override;

    void clear();

    ~PainterWidget()override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

signals:

public slots:
};

#endif // PAINTERWIDGET_H
