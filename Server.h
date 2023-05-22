#ifndef SERVER_H
#define SERVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

//Server is the child of the Player class, and represents the player that 
//is serving in this game. Server inherits from Player Class. It has additional 
//attributes such as serving ability, luck and roundScore.

class Server : public Player {
private:
    int servingAbility;     //initialising data members
    float luck;
    float roundScore;

public:
    //Constructors and Destructors
    Server(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int servingAbility);
    Server();
    ~Server();

    //Setter and Getter functions
    void setServingAbility(int servingAbility);
    int getServingAbility();

    void setLuck();
    float getLuck();

    void setRoundScore(float roundScore);
    float getRoundScore();

    //new print() method
    void print();

    //play() method to simulate a the server playing
    void play();
    
};

#endif /* SERVER_H */