#ifndef CIRCLEBUILDER_H
#define CIRCLEBUILDER_H

#include <QBrush>
#include <QGraphicsEllipseItem>

#include "IFigureBuilder.h"


class CircleBuilder : public IFigureBuilder
{
private:
    QGraphicsEllipseItem* circle;

    const int X = 10;
    const int Y = 10;

    QGraphicsEllipseItem* clone();

public:
    CircleBuilder();
    ~CircleBuilder();

    void setColor(QBrush brush) override;
    void setSize(int size) override;
    QGraphicsEllipseItem* draw() override;
};

#endif // CIRCLEBUILDER_H
