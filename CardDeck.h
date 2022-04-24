//
// Created by John Garcia on 4/19/22.
//
#include <QString>
#include "CardHand.h"
#ifndef HW05_CARDDECK_H
#define HW05_CARDDECK_H

class CardDeck{
private:
    QList<Card*> Deck;
public:
    CardDeck();
    CardHand deal(int handSize);
    QString toString();
    int getCardsLeft();
    void restoreDeck();
};

#endif //HW05_CARDDECK_H
