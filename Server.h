#ifndef SERVER_H
#define SERVER_H

#include "Player.h"
#include <cstdlib>
#include <time.h>

class Server : public Player {
private:
    int servingAbility;
    int luck;
    int roundScore;

public:
    Server(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int servingAbility);
    Server();

    void setServingAbility(int servingAbility);
    int getServingAbility();

    void setLuck();
    int getLuck();

    void print();

    void setRoundScore(int roundScore);
    int getRoundScore();
    
};

#endif /* SERVER_H */