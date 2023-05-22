#include "Receiver.h"

Receiver::Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int receivingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, rallyingAbility), receivingAbility(receivingAbility), roundScore(0){
}

Receiver::Receiver() : Player(), receivingAbility(0), luck(0), roundScore(0) {}

Receiver::~Receiver() {}

void Receiver::setReceivingAbility(int receivingAbility) {
    this->receivingAbility = receivingAbility;
}

int Receiver::getReceivingAbility() {
    return receivingAbility;
}

float Receiver::getLuck() {
    return luck;
}

void Receiver::setLuck(){
  
    //Generate a random integer between 4 and 7 and save this to newLuck
    int random_int = rand();
    int newLuck = random_int % 4 + 4;
  

     
    // Generate a random float between 0 and 1
    float random_float = static_cast<float>(rand()) / RAND_MAX;
    this->luck = newLuck + random_float;
}

void Receiver::setRoundScore(float roundScore) {
    this->roundScore = roundScore;
}

float Receiver::getRoundScore() {
    return roundScore;
}

void Receiver:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Rallying: " << getRallyingAbility() << endl;
    cout << "Receiving: " << getReceivingAbility() << endl;
    cout << "Luck: " << getLuck() << endl;
    cout << "Current Score: " << getRoundScore() << endl << endl;
}

void Receiver:: play(){
    float score = getPower() + getActualSpeed() + getRallyingAbility() + getReceivingAbility() + getLuck();
    setRoundScore(score);
    setLuck();
}