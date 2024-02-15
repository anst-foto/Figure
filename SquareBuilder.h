#ifndef SQUAREBUILDER_H
#define SQUAREBUILDER_H

#include <QBrush>
#include <QGraphicsRectItem>


#include "IFigureBuilder.h"

class SquareBuilder : public IFigureBuilder
{
private:
    QGraphicsRectItem *rect;

    const int X = 10;
    const int Y = 10;

    QGraphicsRectItem* clone();

public:
    SquareBuilder();
    ~SquareBuilder();

    void setColor(QBrush brush) override;
    void setSize(int size) override;

    QGraphicsRectItem *draw() override;
};

#endif
