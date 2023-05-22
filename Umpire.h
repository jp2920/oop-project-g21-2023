#include "Person.h"

class Umpire : public Person {
    private: 
    // DATA MEMBERS
        int serverScore;
        int receiverScore;
        int serverPoints; 
        int receiverPoints;


    public:
    // CONSTRUCTORS
        Umpire(int serverScore, int receiverScore, int serverPoints, int receiverPoints);
        Umpire();

    // FUNCTIONS
        void announcePoint(float receiver_score, float servers_score); 
        void announceScore(); 
        void announceWinner(string serverName, string receiverName); 

    // METHODS
        int get_serverScore();
        void set_serverScore(int serverScore);
        int get_receiverScore();
        void set_receiverScore(int receiverScore);
};