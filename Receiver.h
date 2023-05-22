#ifndef RECEIVER_H
#define RECEIVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

//Receiver is the child of the Player class, and represents the player that 
//is receiving in this game. Server inherits from Player Class. It has 
//additional attributes such as receiving ability, luck and roundScore.

class Receiver : public Player {
private:    
    int receivingAbility;   //initialising data members
    float luck;
    float roundScore;

public:
    //Constructors and Destructors
    Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int receivingAbility);
    Receiver();
    ~Receiver();

    //Setter and Getter functions
    void setReceivingAbility(int receivingAbility);
    int getReceivingAbility();

    float getLuck();
    void setLuck();

    void setRoundScore(float roundScore);
    float getRoundScore();

    //Print and play functions
    void print();

    void play();
};

#endif /* RECEIVER_H */