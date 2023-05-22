#include <iostream>

#include "Umpire.h"

using namespace std;

// Constructor
Umpire :: Umpire(int serverScore, int receiverScore,int serverPoints, int receiverPoints) {
    this->serverScore = serverScore; 
    this->receiverScore = receiverScore;
    this->serverPoints = serverPoints;
    this->receiverPoints = receiverPoints;
}

// Default constructor
Umpire :: Umpire() {
    this->serverScore = 0;
    this->receiverScore = 0; 
    this->serverPoints = 0;
    this->receiverPoints = 0;
}


// Anounces the winner of the point
void Umpire :: announcePoint(float receiver_score, float server_score) {
    // Calculate the winner of the point taking in all the stats
    if (receiver_score > server_score) {
        // compare the two players scores
        cout << "Winner of the point is " << receiver_score << endl;
    }  else {
        cout << "Winner of the point is " << server_score << endl;
    }
}

//Annocunces the current score
void Umpire :: announceScore() {
    cout << "The score is " << endl;

}; 

//Announces the winner of the game
void Umpire :: announceWinner(string receiverName, string serverName) {
    
    if (serverScore > 40) { 
        cout << "The winner of the match is " << receiverName << endl;
    } else {
        cout << "The winner of the match is " << serverName << endl;
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

