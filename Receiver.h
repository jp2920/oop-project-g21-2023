#ifndef RECEIVER_H
#define RECEIVER_H

#include "Player.h"
#include <cstdlib>

class Receiver : public Player {
private:
    int receivingAbility;
    int luck;

public:
    Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, float actualSpeed, int roundScore, int receivingAbility);
    Receiver();
    ~Receiver();

    void setReceivingAbility(int receivingAbility);
    int getReceivingAbility();

    int getLuck();
    void setLuck();
};

#endif /* RECEIVER_H */