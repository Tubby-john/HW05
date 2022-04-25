//
// Created by John Garcia on 4/19/22.
//
#include <QList>
#include <QString>
#include "Card.h"

#ifndef HW05_CARDHAND_H
#define HW05_CARDHAND_H
class CardHand{
private:
    QList<Card> hand;
public:
    CardHand();
    CardHand(QList<Card> newHand): hand(newHand){};
    int getValue();
    QString toString();
};
#endif //HW05_CARDHAND_H

