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

    // FUNCTIONS
        void announcePoint(float receiver_score, float servers_score); 
        void announceScore(); 
        void announceWinner(string serverName, string receiverName); 

    // METHODS
        float get_serverScore();
        void set_serverScore(float serverScore);
        float get_receiverScore();
        void set_receiverScore(float receiverScore);
};