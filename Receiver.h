#ifndef RECEIVER_H
#define RECEIVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

class Receiver : public Player {
private:
    int receivingAbility;
    int luck;

public:
    Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int receivingAbility);
    Receiver();
    ~Receiver();

    void setReceivingAbility(int receivingAbility);
    int getReceivingAbility();

    int getLuck();
    void setLuck();

    void print();
};

#endif /* RECEIVER_H */