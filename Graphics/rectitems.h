#ifndef RECTITEMS_H
#define RECTITEMS_H
#include <QGraphicsRectItem>

class RectItems : public QGraphicsRectItem
{
public:
    RectItems(QGraphicsItem *parent = nullptr);
    QPointF position;
    int height = 0, width = 0;
    int updateInt = 0;
    int curUpdateInt = 0;
    int picsNumber = 0;

private:

};

#endif // RECTITEMS_H
