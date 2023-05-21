#include "Player.h"

Player::Player(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility)
    : Person(name, ID, age, weight), power(power), rawSpeed(rawSpeed), actualSpeed(2*rawSpeed), rallyingAbility(rallyingAbility){}

Player::Player() : Person(), power(0), rawSpeed(0), actualSpeed(0.0), rallyingAbility(0){}

Player::~Player() {}

void Player::setPower(int power) {
    this->power = power;
}

int Player::getPower() {
    return power;
}

void Player::setRawSpeed(int rawSpeed) {
    this->rawSpeed = rawSpeed;
    this->actualSpeed = 2*rawSpeed;
}

int Player::getRawSpeed() {
    return rawSpeed;
}

//Removed the setter for this variable as it is calculated from other stats
/*void Player::setActualSpeed(float actualSpeed) {
    this->actualSpeed = actualSpeed;
}*/ 

float Player::getActualSpeed() {
    return actualSpeed;
}

int Player::getRallyingAbility() {
    return rallyingAbility;
}

void Player::setRallyingAbility(int rallyingAbility) {
    this->rallyingAbility = rallyingAbility;
}

 

void Player:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
}