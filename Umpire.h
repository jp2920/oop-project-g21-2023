#include "Person.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

#include <string>



class Umpire : public Person {
    private: 
    // DATA MEMBERS
        float serverScore;
        float receiverScore;
        int serverPoints; 
        int receiverPoints;
        std::string* scoreboard;    //dynamic array to hold scores
        int capacity;               //capacity of array
        int size;                   //number of elements in array  


    public:
    // CONSTRUCTORS
        Umpire(float serverScore, float receiverScore, int serverPoints, int receiverPoints);
        Umpire();
        ~Umpire();

    // GETTER AND SETTER METHODS
        float get_serverScore();
        void set_serverScore(float roundScore);
        float get_receiverScore();
        void set_receiverScore(float roundScore);
        int get_serverPoints();
        void set_serverPoints(int points);
        int get_receiverPoints();
        void set_receiverPoints(int points);

     // FUNCTIONS
        void serve(Server& S);
        void receive(Receiver& R);
        void givePoints(Server& S, Receiver& R);
        void announcePoints(); 
        int checkWinner(Server& S, Receiver& R);
        void addScore(const string& score);
        void printScoreboard();
        
       
};