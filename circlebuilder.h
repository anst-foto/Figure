#ifndef CIRCLEBUILDER_H
#define CIRCLEBUILDER_H

#include <QBrush>
#include <QGraphicsEllipseItem>


class CircleBuilder
{
private:
    QGraphicsEllipseItem* circle;

    const int X = 10;
    const int Y = 10;

public:
    CircleBuilder();
    ~CircleBuilder();

    void setColor(QBrush brush);
    void setDiameter(int diameter);
    QGraphicsEllipseItem* draw();
};

#endif // CIRCLEBUILDER_H
