#ifndef RECEIVER_H
#define RECEIVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

class Receiver : public Player {
private:
    int receivingAbility;
    float luck;
    float roundScore;

public:
    Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int receivingAbility);
    Receiver();
    ~Receiver();

    void setReceivingAbility(int receivingAbility);
    int getReceivingAbility();

    float getLuck();
    void setLuck();

    void print();

    void setRoundScore(float roundScore);
    float getRoundScore();

    void play();
};

#endif /* RECEIVER_H */