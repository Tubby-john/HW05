//
// Created by John Garcia on 4/19/22.
//

#include "CardDeck.h"
#include "CardHand.h"
#include <cstdlib>

CardDeck::CardDeck() {
    for(int suit = 0; suit < 3; suit++){
        for(int num = 0; num < 13; num++){
           QList::append(new Card(num, suit));
        }
    }
}

CardHand CardDeck::deal(int handSize) {
    srandom(time(0));
    CardHand hand;
    for(int i = 0; i < handSize;i++){
        int index = random()%this->length();
        hand.append(this->at(index));
        this->removeAt(index);
    }
}

QString CardDeck::toString() {
    
    foreach(Card* card, this){

    }
}

int CardDeck::getCardsLeft() {

}

void CardDeck::restoreDeck() {
    qDeleteAll(this);
}

