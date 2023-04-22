#ifndef PLAYERITEM_H
#define PLAYERITEM_H
#include "../charactersitem.h"

class PlayerItem : public charactersItem
{
public:
    PlayerItem(QGraphicsItem *parent = nullptr);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // PLAYERITEM_H
