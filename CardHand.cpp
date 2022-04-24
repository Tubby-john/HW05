//
// Created by John Garcia on 4/19/22.
//

#include "CardHand.h"
#include "Card.h"

int CardHand::getValue() {

}
QString CardHand::toString() {
    QString value;
    foreach(Card* ch, hand){
        value.append(ch->toString());
    }
    return value;
}
