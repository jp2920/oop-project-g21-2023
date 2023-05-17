#include "Receiver.h"

Receiver::Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int receivingAbility)
    : Player(name, ID, age, weight, power, rawSpeed), receivingAbility(receivingAbility)
{
 // Seed the random number generator using the current time
    srand(time(nullptr));
    // Generate a random integer between 0 and RAND_MAX
    int random_int = rand();
    luck = random_int % 4 + 5;
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
    // Seed the random number generator using the current time
    srand(time(nullptr));
    // Generate a random integer between 0 and RAND_MAX
    int random_int = rand();
    int newLuck = random_int % 4 + 5;
    this->luck = newLuck;
}

void Receiver:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Current Score: " << getRoundScore() << endl;
    cout << "Receiving: " << getReceivingAbility() << endl;
    cout << "Luck: " << getLuck() << endl << endl;
}