#include "Player.h"

Player::Player(string name, int ID, int age, float weight, int power, int rawSpeed)
    : Person(name, ID, age, weight), power(power), rawSpeed(rawSpeed), actualSpeed(2*rawSpeed), roundScore(0) {}

Player::Player() : Person(), power(0), rawSpeed(0), actualSpeed(0.0), roundScore(0) {}

Player::~Player() {}

void Player::setPower(int power) {
    this->power = power;
}

int Player::getPower() {
    return power;
}

void Player::setRawSpeed(int rawSpeed) {
    this->rawSpeed = rawSpeed;
}

int Player::getRawSpeed() {
    return rawSpeed;
}

void Player::setActualSpeed(float actualSpeed) {
    this->actualSpeed = actualSpeed;
}

float Player::getActualSpeed() {
    return actualSpeed;
}

void Player::setRoundScore(int roundScore) {
    this->roundScore = roundScore;
}

int Player::getRoundScore() {
    return roundScore;
}

void Player:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Speed: " << getActualSpeed() << endl;
    cout << "Current Score: " << getRoundScore() << endl;
}