#ifndef RECEIVER_H
#define RECEIVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

class Receiver : public Player {
private:
    int receivingAbility;
    int luck;
    int roundScore;

public:
    Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int receivingAbility);
    Receiver();
    ~Receiver();

    void setReceivingAbility(int receivingAbility);
    int getReceivingAbility();

    int getLuck();
    void setLuck();

    void print();

    void setRoundScore(int roundScore);
    int getRoundScore();
};

#endif /* RECEIVER_H */