#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"
#include <cstdlib>

//Player is the child of the Person class, and in turn is the parent of both Server
//and Receiver. Player inherits the data members of Person (name, ID, age, weight)
//and represents a tennis player who inherits from Person Class and has additional 
//attributes such as power, raw speed, actual speed, rallying ability.

class Player : public Person {
private:    //initilising attributes
    int power;
    int rawSpeed;
    float actualSpeed;
    int rallyingAbility;

public:
    //Contructors and destructors
    Player(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility);
    Player();
    ~Player();

    //Setter and Getter methods
    void setPower(int power);
    int getPower();

    void setRawSpeed(int rawSpeed);
    int getRawSpeed();

    void setActualSpeed(float actualSpeed);
    float getActualSpeed();

    void setRallyingAbility(int rallyingAbility);
    int getRallyingAbility();

    //print() method for a Player object
    void print();
};

#endif /* PLAYER_H */