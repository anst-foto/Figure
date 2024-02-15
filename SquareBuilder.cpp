#include "SquareBuilder.h"

SquareBuilder::SquareBuilder()
{
    rect = new QGraphicsRectItem();
}

SquareBuilder::~SquareBuilder()
{
    delete rect;
}

void SquareBuilder::setColor(QBrush brush)
{
    rect->setBrush(brush);
}

void SquareBuilder::setSize(int size)
{
    rect->setRect(X, Y, size, size);
}

QGraphicsRectItem *SquareBuilder::draw()
{
    return clone();
}


QGraphicsRectItem *SquareBuilder::clone()
{
    auto clone = new QGraphicsRectItem();
    clone->setBrush(rect->brush());
    clone->setRect(rect->rect());

    return clone;
}
