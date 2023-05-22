#include "Player.h"

//Constructors and Destructors
Player::Player(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility)
    : Person(name, ID, age, weight), power(power), rawSpeed(rawSpeed), actualSpeed(2*rawSpeed), rallyingAbility(rallyingAbility){}

Player::Player() : Person(), power(0), rawSpeed(0), actualSpeed(0.0), rallyingAbility(0){}

Player::~Player() {}

//Setter and Getter Methods
//Note that there is no setter for actualSpped as it is calculated from 
//other stats using the formula: actualSpeed = rawSpeed / (age + weight)
void Player::setPower(int power) {
    this->power = power;
}

int Player::getPower() {
    return power;
}

//As stated before, the setRawSpeed also sets the value for actualSpeed
void Player::setRawSpeed(int rawSpeed) {
    this->rawSpeed = rawSpeed;
    this->actualSpeed = rawSpeed / (getAge() + getWeight());
    //The ternary operator is used here to ensure speed ≤ 10
    this-> actualSpeed = (actualSpeed > 10) ? 10 : actualSpeed;
}

int Player::getRawSpeed() {
    return rawSpeed;
}

float Player::getActualSpeed() {
    return actualSpeed;
}

int Player::getRallyingAbility() {
    return rallyingAbility;
}

void Player::setRallyingAbility(int rallyingAbility) {
    this->rallyingAbility = rallyingAbility;
}

 
//This is the implementation of a Player object and will override the 
//previous implementations
void Player:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Rallying: " << getRallyingAbility() << endl;
}