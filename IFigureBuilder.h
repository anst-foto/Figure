#ifndef IFIGUREBUILDER_H
#define IFIGUREBUILDER_H

#include <QAbstractGraphicsShapeItem>
#include <QBrush>

class IFigureBuilder
{
public:
    virtual void setColor(QBrush color) = 0;
    virtual void setSize(int size) = 0;
    virtual QAbstractGraphicsShapeItem* draw() = 0;
};

#endif
