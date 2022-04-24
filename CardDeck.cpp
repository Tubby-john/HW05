//
// Created by John Garcia on 4/19/22.
//

#include "CardDeck.h"
#include "CardHand.h"
#include <cstdlib>

CardDeck::CardDeck() {
    for(int suit = 0; suit < 3; suit++){
        for(int num = 0; num < 13; num++){
            Deck.append(new Card(num, suit));
        }
    }
}

CardHand CardDeck::deal(int handSize) {
    srandom(time(0));
    QList<Card*> h;
    for(int i = 0; i < handSize; i++){
            int index = random()%handSize+1;
            h.append(Deck[index]);
            Deck.removeAt(index);
    }
    CardHand hand;

    return hand;
}

QString CardDeck::toString() {
    QString lastOfCards;
    foreach(Card* cd, Deck){
        lastOfCards.append(cd->toString());
    }
    return lastOfCards;
}

int CardDeck::getCardsLeft() {
    return Deck.length();
}

void CardDeck::restoreDeck() {
    Deck.clear();

}

