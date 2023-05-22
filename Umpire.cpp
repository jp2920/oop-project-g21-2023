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


// Anounces the winner of the point
void Umpire :: announcePoint() {
    // Calculate the winner of the point taking in all the stats
    



    // compare the two players scores
    cout << "Winner of the point: " << endl;


}

//Annocunces the current score
void Umpire :: announceScore() {

}; 

//Announces the winner of the game
void Umpire :: announceWinner() {

    if (serverScore > receiverScore) {
        
        
    }
}; 

// GETTERS AND SETTERS 
int Umpire :: get_serverScore() {
    return serverScore;
}

void Umpire :: set_serverScore(int serverScore) {
    this->serverScore = serverScore;
}

int Umpire :: get_receiverScore() {
    return receiverScore;
}

void Umpire :: set_receiverScore(int receiverScore) {
    receiverScore = receiverScore;
}

