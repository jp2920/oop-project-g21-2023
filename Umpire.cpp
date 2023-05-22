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
    receiverScore = R.getRoundScore();
}

//This function compares the scores from the two players. Whoever has the
//higher score will win points.
void Umpire :: givePoints(Server& S, Receiver& R){
      //Check if it's a let
    if (serverScore == receiverScore) {
        cout << "Let! The server will retake the serve." << endl;
        return;
    }

    //Check for Ace or perfect return
    if (serverScore > receiverScore + 3){
        cout << "Ace!" << endl;
    }else if (receiverScore > serverScore + 3){
        cout << "Perfect return!" << endl;
    }
    //Check which player wins the point. Tennis points go from:
    //0 --> 15 --> 30 --> 40 (maybe deuce) --> (advantage) --> Winner
    if (serverScore > receiverScore) {
        cout << S.getName() << "'s point!" << endl;
        if (serverPoints < 30)
            serverPoints += 15;
        else
            serverPoints += 10;
    } else {
        cout << R.getName() << "'s point!" << endl;
        if (receiverPoints < 30)
            receiverPoints += 15;
        else
            receiverPoints += 10;
    }
}

void Umpire :: announcePoints(){
    if (serverPoints == 50 && receiverPoints == 50){
        serverPoints = 40;
        receiverPoints = 40;
    }
    if (serverPoints == 40 && receiverPoints ==40){
        cout << get_serverPoints() << "-" << get_receiverPoints() << endl;
        cout << "Duece!" << endl << endl;
    }else if (serverPoints == 50 && receiverPoints == 40){
        cout << "Advantage Server" << endl << endl;
    }else if (receiverPoints == 50 && serverPoints == 40){
        cout << "Advantage Receiver" << endl << endl;
    }else{
        cout << get_serverPoints() << "-" << get_receiverPoints() << endl << endl;
    }
}

//This function will run after each point is played and points have been
//allocated. It will check to see if the server or receiver has won yet.
int Umpire :: checkWinner(Server& S, Receiver& R){
    if (serverPoints > 50){
        cout << S.getName() << " wins!" << endl;
        return 0;
    }else if (receiverPoints > 50) {
         cout << R.getName() << " wins!" << endl;
         return 0;
    }else if (serverPoints == 50 && receiverPoints <50){
        cout << S.getName() << " wins!" << endl;
        return 0;
    }else if (receiverPoints == 50 && serverPoints <50){
        cout << S.getName() << " wins!" << endl;
        return 0;
    }else{
        return 1;
    }
}
