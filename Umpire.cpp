#include <iostream>
#include "Umpire.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

using namespace std;

// Constructor
Umpire :: Umpire(float serverScore, float receiverScore,int serverPoints, int receiverPoints) {
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

// GETTERS AND SETTERS 
float Umpire :: get_serverScore() {
    return serverScore;
}

void Umpire :: set_serverScore(float serverScore) {
    this->serverScore = serverScore;
}

float Umpire :: get_receiverScore() {
    return receiverScore;
}

void Umpire :: set_receiverScore(float receiverScore) {
    this->receiverScore = receiverScore;
}

int Umpire :: get_serverPoints(){
    return serverPoints;
}

void Umpire :: set_serverPoints(int points){
    this->serverPoints = points;
}

int Umpire :: get_receiverPoints(){
    return receiverPoints;
}

void Umpire :: set_receiverPoints(int points){
    this->receiverPoints = points;
}

//FUNCTIONS
//This function takes a server object as a parameter and starts the game 
//by "serving" the ball. The umpire will also retreive the Server's score
//for this round. 
void Umpire :: serve(Server& S){
    //Use the play() function in the server object
    S.play();
    //retrieving the Servers Score
    serverScore = S.getRoundScore();
    
}

//This function takes a receiver object as a parameter and allows the
//receiver to "receive the ball". The umpire will also retreive the 
//Receiver's score for this round. 
void Umpire :: receive(Receiver& R){
    //Use the play() function in the receiver object
    R.play();
    //retrieving the Servers Score
    serverScore = R.getRoundScore();
}

//This function compares the scores from the two players. Whoever has the
//higher score will win points.
void Umpire :: announcePoint(){
   // Check if it's a let
    if (serverScore == receiverScore) {
        cout << "Let! The server will retake the serve." << endl;
        return;
    }
    // Check which player wins the point
    if (serverScore > receiverScore) {
        cout << "Winner of the point is the server!" << endl;
        serverPoints++;
    } else {
        cout << "Winner of the point is the receiver!" << endl;
        receiverPoints++;
    }
}


//This function will run after each point is played and points have been
//allocated. It will check to see if the server or receiver has won yet.
void Umpire :: checkWinner(){
    if (serverPoints > 40){
        cout << "Winner of the point is the server!" << endl;
    }else if (receiverPoints > 40) {
         cout << "Winner of the point is the receiver!" << endl;
    }
}