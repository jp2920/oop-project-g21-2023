#include <iostream>
#include "Umpire.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

using namespace std;

// Constructor
Umpire::Umpire(float serverScore, float receiverScore, int serverPoints, int receiverPoints) {
    this->serverScore = serverScore;
    this->receiverScore = receiverScore;
    this->serverPoints = serverPoints;
    this->receiverPoints = receiverPoints;
    scoreboard = nullptr;
    capacity = 0;
    size = 0;
}

// Default constructor
Umpire::Umpire() {
    this->serverScore = 0;
    this->receiverScore = 0;
    this->serverPoints = 0;
    this->receiverPoints = 0;
    scoreboard = nullptr;
    capacity = 0;
    size = 0;
}

//Destructor
Umpire::~Umpire(){
    delete[] scoreboard;    //deallocate memory
}

// Getter and Setter methods
float Umpire::get_serverScore() {
    return serverScore;
}

void Umpire::set_serverScore(float serverScore) {
    this->serverScore = serverScore;
}

float Umpire::get_receiverScore() {
    return receiverScore;
}

void Umpire::set_receiverScore(float receiverScore) {
    this->receiverScore = receiverScore;
}

int Umpire::get_serverPoints() {
    return serverPoints;
}

void Umpire::set_serverPoints(int points) {
    this->serverPoints = points;
}

int Umpire::get_receiverPoints() {
    return receiverPoints;
}

void Umpire::set_receiverPoints(int points) {
    this->receiverPoints = points;
}

// Functions
void Umpire::serve(Server& S) {
    // Use the play() function in the server object
    S.play();
    // Retrieving the Server's Score
    serverScore = S.getRoundScore();
}

void Umpire::receive(Receiver& R) {
    // Use the play() function in the receiver object
    R.play();
    // Retrieving the Receiver's Score
    receiverScore = R.getRoundScore();
}

void Umpire::givePoints(Server& S, Receiver& R) {
    // Check if it's a let
    if (serverScore == receiverScore) {
        cout << "Let! The server will retake the serve." << endl;
        return;
    }

    // Check for Ace or perfect return
    if (serverScore > receiverScore + 3) {
        cout << "Ace!" << endl;
    }
    else if (receiverScore > serverScore + 3) {
        cout << "Perfect return!" << endl;
    }

    // Check which player wins the point. Tennis points go from:
    // 0 --> 15 --> 30 --> 40 (maybe deuce) --> (advantage) --> Winner
    if (serverScore > receiverScore) {
        cout << S.getName() << "'s point!" << endl;
        if (serverPoints < 30)
            serverPoints += 15;
        else
            serverPoints += 10;
    }
    else {
        cout << R.getName() << "'s point!" << endl;
        if (receiverPoints < 30)
            receiverPoints += 15;
        else
            receiverPoints += 10;
    }
}

void Umpire::announcePoints() {
    string score;
    if (serverPoints == 50 && receiverPoints == 50) {
        serverPoints = 40;
        receiverPoints = 40;
    }
    if (serverPoints == 40 && receiverPoints == 40) {
        cout << get_serverPoints() << "-" << get_receiverPoints() << endl;
        cout << "Deuce" << endl << endl;
        score = "Deuce";
        addScore(score);

    }
    else if (serverPoints == 50 && receiverPoints == 40) {
        cout << "Advantage Server" << endl << endl;
        score = "Advantage Server";
        addScore(score);
    }
    else if (receiverPoints == 50 && serverPoints == 40) {
        cout << "Advantage Receiver" << endl << endl;
        score = "Advantage Receiver";
        addScore(score);
    }
    else if (serverPoints > 40 || receiverPoints > 40) {

    }else{
        cout << get_serverPoints() << "-" << get_receiverPoints() << endl << endl;
        score = to_string(get_serverPoints()) + "-" + to_string(get_receiverPoints());
        addScore(score);
    }
}

void Umpire::addScore(const string& score){
     // Create a new dynamic array with increased size
    string* newScoreboard = new string[size + 1];

    // Copy existing scores to the new array
    for (int i = 0; i < size; i++) {
        newScoreboard[i] = scoreboard[i];
    }

    // Add the new score to the end of the new array
    newScoreboard[size] = score;

    // Free the memory occupied by the old scoreboard
    delete[] scoreboard;

    // Set the scoreboard pointer to the new array
    scoreboard = newScoreboard;

    // Update the scoreboard size
    size += 1;
}

int Umpire::checkWinner(Server& S, Receiver& R) {
    if (serverPoints > 55) {
        cout << S.getName() << " wins!" << endl;
        return 0;
    }
    else if (receiverPoints > 55) {
        cout << R.getName() << " wins!" << endl;
        return 0;
    }
    else if (serverPoints == 50 && receiverPoints < 40) {
        cout << S.getName() << " wins!" << endl;
        return 0;
    }
    else if (receiverPoints == 50 && serverPoints < 40) {
        cout << R.getName() << " wins!" << endl;
        return 0;
    }
    else {
        return 1;
    }
}

void Umpire::printScoreboard() {
    cout << "Scoreboard:" << endl;
    for (int i = 0; i < size; i++) {
        cout << scoreboard[i] << endl;
    }
}