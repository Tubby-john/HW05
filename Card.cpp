//
// Created by John Garcia on 4/19/22.
//
#include <QString>
#include <QStringList>
#include "Card.h"

const QStringList Card::s_Faces = { "1", "2", "3", "4",
                                    "5", "6", "7", "8",
                                    "9", "10", "Jack", "Queen",
                                    "King", "Ace"};
const QStringList Card::s_Suit = {"Hearts", "Diamonds", "Clubs", "Spades"};

QString Card::toString(){
    return QString(getFace() + " " + getSuit());
}

QString Card::getFace() {
    return s_Faces[m_FaceNbr];
}

QString Card::getSuit() {
    return s_Suit[m_SuitNbr];
}

int Card::getValue() {
    if(getFace() == "Ace") { return 4;}
    else if(getFace() == "King") {return 3;}
    else if(getFace() == "Queen") {return 2;}
    else if(getFace() == "Jack") {return 1;}
    else {return 0;}
}
