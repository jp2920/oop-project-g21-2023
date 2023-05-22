#include "Person.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

class Umpire : public Person {
    private: 
    // DATA MEMBERS
        float serverScore;
        float receiverScore;
        int serverPoints; 
        int receiverPoints;


    public:
    // CONSTRUCTORS
        Umpire(float serverScore, float receiverScore, int serverPoints, int receiverPoints);
        Umpire();

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
        
       
};