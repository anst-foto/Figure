#include "circlebuilder.h"

CircleBuilder::CircleBuilder()
{
    circle = new QGraphicsEllipseItem();
}

CircleBuilder::~CircleBuilder()
{
    delete circle;
}

void CircleBuilder::setColor(QBrush brush)
{
    circle->setBrush(brush);
}

void CircleBuilder::setSize(int size)
{
    circle->setRect(X, Y, size, size);
}

QGraphicsEllipseItem *CircleBuilder::draw()
{
    return clone();
}


QGraphicsEllipseItem* CircleBuilder::clone()
{
    auto clone = new QGraphicsEllipseItem();
    clone->setBrush(circle->brush());
    clone->setRect(circle->rect());

    return clone;
}
