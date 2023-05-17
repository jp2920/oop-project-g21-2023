#include "Server.h"

Server::Server(string name, int ID, int age, float weight, int power, int rawSpeed, float actualSpeed, int roundScore, int servingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, actualSpeed, roundScore), servingAbility(servingAbility)
{
    // initialize luck with a random integer between 5 and 10
    luck = rand() % 6 + 5;
}

Server::Server() : Player(), servingAbility(0), luck(0) {}

void Server::setServingAbility(int servingAbility) {
    this->servingAbility = servingAbility;
}

int Server::getServingAbility() {
    return servingAbility;
}

int Server::getLuck() {
    return luck;
}

void Server::setLuck(){
    int newLuck = rand() % 6 +5;
    this->luck = newLuck;
}

void Server:: print(){
    cout << getName() << endl;
    cout << getID() << endl;
    cout << getAge() << endl;
    cout << getWeight() << endl;
    cout << getPower() << endl;
    cout << getActualSpeed() << endl;
    cout << getRoundScore() << endl;
    cout << getServingAbility() << endl;
    cout << getLuck() << endl;
}