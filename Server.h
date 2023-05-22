#ifndef SERVER_H
#define SERVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

class Server : public Player {
private:
    int servingAbility;
    float luck;
    float roundScore;

public:
    Server(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int servingAbility);
    Server();

    void setServingAbility(int servingAbility);
    int getServingAbility();

    void setLuck();
    float getLuck();

    void print();

    void setRoundScore(float roundScore);
    float getRoundScore();

    void play();
    
};

#endif /* SERVER_H */