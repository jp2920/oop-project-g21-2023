#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"
#include <cstdlib>

class Player : public Person {
private:
    int power;
    int rawSpeed;
    float actualSpeed;
    int roundScore;

public:
    Player(string name, int ID, int age, float weight, int power, int rawSpeed);
    Player();
    ~Player();

    void setPower(int power);
    int getPower();

    void setRawSpeed(int rawSpeed);
    int getRawSpeed();

    void setActualSpeed(float actualSpeed);
    float getActualSpeed();

    void setRoundScore(int roundScore);
    int getRoundScore();

    void print();
};

#endif /* PLAYER_H */