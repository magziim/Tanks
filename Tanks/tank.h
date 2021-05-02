#ifndef TANK_H
#define TANK_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPainterPath>
#include <QGraphicsScene>

#include "windows.h"
#include <QScreen>
#include <QGuiApplication>

class Tank : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Tank(QObject *parent = 0);
    ~Tank();

signals:

public slots:
    void slotGameTimer1(); //moving by VK
    void slotGameTimer2(); //moving by WASD

protected:
    QRectF boundingRect() const;
    QPainterPath shape() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    int width = QGuiApplication::screens().at(0)->availableGeometry().width();
    int height = QGuiApplication::screens().at(0)->availableGeometry().height();

    qreal angle; //angle

};

#endif // TANK_H
