#include "Server.h"


Server::Server(string name, int ID, int age, float weight, int power, int rawSpeed, int servingAbility)
    : Player(name, ID, age, weight, power, rawSpeed), servingAbility(servingAbility)
{
    // Seed the random number generator using the current time
    srand(time(nullptr));
    // Generate a random integer between 0 and RAND_MAX
    int random_int = rand();
    luck = random_int % 6 + 5;
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
    // Seed the random number generator using the current time
    srand(time(nullptr));
    // Generate a random integer between 0 and RAND_MAX
    int random_int = rand();
    int newLuck = random_int % 6 + 5;
    this->luck = newLuck;
}

void Server:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Current Score: " << getRoundScore() << endl;
    cout << "Serving: " << getServingAbility() << endl;
    cout << "Luck: " << getLuck() << endl << endl;
}