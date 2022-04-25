//
// Created by John Garcia on 4/19/22.
//

#include "CardDeck.h"
#include "CardHand.h"
#include <cstdlib>
#include <QTextStream>
QTextStream cout(stdout);

CardDeck::CardDeck() {
    for(int suit = 0; suit < 3; suit++){
        for(int num = 0; num < 13; num++){
            deck.append(Card(num, suit));
        }
    }
}

CardHand CardDeck::deal(int handSize) {
    srandom(time(0));
    QList<Card> newHand;
    for(int i = 0; i < handSize;i++){
        int index = random()%deck.length()+1;
        newHand.append(deck[index]);
        deck.removeAt(index);
    }
}

QString CardDeck::toString() {
    QString cardsLeft;
    foreach(Card card, deck){
        cardsLeft.append(card.toString());
    }
    return cardsLeft;
}

int CardDeck::getCardsLeft() {
    return deck.length();
}

void CardDeck::restoreDeck() {
    deck.clear();
    for(int suit = 0; suit < 3; suit++){
        for(int num = 0; num < 13; num++){
            deck.append(Card(num, suit));
        }
    }
}

