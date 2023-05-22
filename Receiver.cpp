#include "Receiver.h"

//Constructors and Destructors
Receiver::Receiver(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int receivingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, rallyingAbility), receivingAbility(receivingAbility), roundScore(0){
}

Receiver::Receiver() : Player(), receivingAbility(0), luck(0), roundScore(0) {}

Receiver::~Receiver() {}

//Setter and Getter Functions
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
    //This setLuck function is identical to the one found in the Server 
    //class except the range of values will be between 4 and 8 instead
    //of between 5 and 10 (Servers advantage)
    //Generate a random integer between 4 and 7 and save this to newLuck
    int random_int = rand();
    int newLuck = random_int % 4 + 4;

    // Generate a random float between 0 and 1
    float random_float = static_cast<float>(rand()) / RAND_MAX;
    this->luck = newLuck + random_float; //sum them to get luck
}

void Receiver::setRoundScore(float roundScore) {
    this->roundScore = roundScore;
}

float Receiver::getRoundScore() {
    return roundScore;
}

//This is the implementation of a Server object and will override the 
//previous implementations
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

//Receiver has an additional method play(). This function is identical to
//the version found in Server, except there is a change in the formula:
//score = power + speed + rallying + receiving + luck
//The function also uses the setLuck() method to generate another random
//value for luck for the next point.
void Receiver:: play(){
    float score = getPower() + getActualSpeed() + getRallyingAbility() + getReceivingAbility() + getLuck();
    setRoundScore(score);
    setLuck();
}