#ifndef SERVER_H
#define SERVER_H

#include "Player.h"
#include <cstdlib>

class Server : public Player {
private:
    int servingAbility;
    int luck;

public:
    Server(string name, int ID, int age, float weight, int power, int rawSpeed, float actualSpeed, int roundScore, int servingAbility);
    Server();

    void setServingAbility(int servingAbility);
    int getServingAbility();

    void setLuck();
    int getLuck();

    void print();
    
};

#endif /* SERVER_H */