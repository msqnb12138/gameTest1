#include "playeritem.h"
#include "../../Main/mainwindow.h"
#include <QDebug>
#include <QCoreApplication>

PlayerItem::PlayerItem(QGraphicsItem *parent) :
    charactersItem (parent)
{
    height = 150;
    width = 150;
    position = QPointF(0, 0);
    setRect(0, 0, width, height);
    updateInt = static_cast<int>(0.05/MainWindow::getDeltTime());
}

void PlayerItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    charactersItem::paint(painter, option, widget);
    QString picaddr = ":/Srcs/Player/Right_Runing/Srcs/player/Right - Running/pic (" + QString::number(picsNumber+1) + ").png";
    QImage pic(picaddr);
    painter->drawImage(boundingRect(), pic);
    if(++curUpdateInt==updateInt){
        curUpdateInt = 0;
        picsNumber=(picsNumber+1)%12;
    }
}
