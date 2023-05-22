#include "Server.h"


Server::Server(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int servingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, rallyingAbility), servingAbility(servingAbility), roundScore(0){ 
}

Server::Server() : Player(), servingAbility(0), luck(0), roundScore(0) {}

void Server::setServingAbility(int servingAbility) {
    this->servingAbility = servingAbility;
}

int Server::getServingAbility() {
    return servingAbility;
}

float Server::getLuck() {
    return luck;
}

void Server::setLuck(){
    //Generate a random integer between 5 and 9 and save this to newLuck
    int random_int = rand();
    int newLuck = random_int % 5 + 5;
     
   
    // Generate a random float between 0 and 1
    float random_float = static_cast<float>(rand()) / RAND_MAX;
    this->luck = newLuck + random_float;
}

void Server::setRoundScore(float roundScore) {
    this->roundScore = roundScore;
}

float Server::getRoundScore() {
    return roundScore;
}

void Server:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Rallying: " << getRallyingAbility() << endl;
    cout << "Serving: " << getServingAbility() << endl;
    cout << "Luck: " << getLuck() << endl;
    cout << "Current Score: " << getRoundScore() << endl << endl;
}

void Server:: play(){
    float score = getPower() + getActualSpeed() + getRallyingAbility() + getServingAbility() + getLuck();
    setRoundScore(score);
    setLuck();
}