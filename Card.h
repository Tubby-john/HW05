//
// Created by John Garcia on 4/19/22.
//
#include <QStringList>
#ifndef HW05_CARD_H
#define HW05_CARD_H

class Card : public QList {
private:
    int m_FaceNbr;
    int m_SuitNbr;
    const static QStringList s_Faces;
    const static QStringList s_Suit;
public:
    Card(int faceNbr, int suitNbr):
    m_FaceNbr(faceNbr), m_SuitNbr(suitNbr){};
    QString toString();
    QString getFace();
    QString getSuit();
    int getValue();
};

#endif //HW05_CARD_H
