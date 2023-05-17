#include <iostream>

#include "Umpire.h"

using namespace std;

// Constructor
Umpire :: Umpire(int serverScore, int receiverScore) {
    this->serverScore = serverScore; 
    this->receiverScore = receiverScore;
}

// Default constructor
Umpire :: Umpire() {
    this->serverScore = 0;
    this->receiverScore = 0; 
}

// Destuctor
Umpire :: ~Umpire() {}

// 

// Anounces the winner of the point
void Umpire :: announcePoint() {
    // compare the two players scores
    cout << "Winner of the point: " <<;


}

//Annocunces the current score
void announceScores() {

}; 

//Announces the winner of the game
void announceWinner() {
    if (serverScore > receiverScore) {
        
        
    }
}; 

// GETTERS AND SETTERS 
int Umpire :: get_serverScore() {
    return serverScore;
}

void Umpire :: set_serverScore(int serverScore) {
    serverScore = serverScore;
}

int get_receiverScore() {
    return receiverScore;
}

void set_receiverScore(int receiverScore) {
    receiverScore = receiverScore;
}

