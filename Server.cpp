#include "Server.h"

//Constructors and Destructors
Server::Server(string name, int ID, int age, float weight, int power, int rawSpeed, int rallyingAbility, int servingAbility)
    : Player(name, ID, age, weight, power, rawSpeed, rallyingAbility), servingAbility(servingAbility), roundScore(0){ 
}

Server::Server() : Player(), servingAbility(0), luck(0), roundScore(0) {}

Server::~Server(){}

//Setter and Getter Methods
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
    //The variable luck is random instead of being given by the user
    //Note that the random number generator has been seeded to current time
    //Generate a random integer between 5 and 14 and save this to newLuck
    int random_int = rand();
    int newLuck = random_int % 10 + 5;
   
    // Generate a random float between 0 and 1
    //float random_float = static_cast<float>(rand()) / RAND_MAX;
    //Luck is the sum of these 2 random values
    this->luck = newLuck; //+ random_float;
}

void Server::setRoundScore(float roundScore) {
    this->roundScore = roundScore;
}

float Server::getRoundScore() {
    return roundScore;
}

//This is the implementation of a Server object and will override the 
//previous implementations
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

//Server has an additional method play(). This function calculates a number
//and assigns it to the roundScore variable. This number represents how 
//well the server played on this particular point. It is calculated using 
//the data members in this formula: 
//score = power + speed + rallying + serving + luck
//The function also uses the setLuck() method to generate another random
//value for luck for the next point.
void Server:: play(){
    float score = getPower() + getActualSpeed() + getRallyingAbility() + getServingAbility() + getLuck();
    setRoundScore(score);
    setLuck();
}