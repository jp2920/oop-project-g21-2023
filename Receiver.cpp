#include "Receiver.h"

Receiver::Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, float actualSpeed, int roundScore, int receivingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, actualSpeed, roundScore), receivingAbility(receivingAbility)
{
    // initialize luck with a random integer between 5 and 8
    luck = rand() % 4 + 5;
}

Receiver::Receiver() : Player(), receivingAbility(0), luck(0) {}

Receiver::~Receiver() {}

void Receiver::setReceivingAbility(int receivingAbility) {
    this->receivingAbility = receivingAbility;
}

int Receiver::getReceivingAbility() {
    return receivingAbility;
}

int Receiver::getLuck() {
    return luck;
}

void Receiver::setLuck(){
    int newLuck = rand() % 4 + 5;
    this->luck = newLuck;
}