#include "Person.h"

class Umpire : public Person {
    private: 
    // DATA MEMBERS
        int serverScore;
        int receiverScore;

    public:
    // CONSTRUCTORS
        Umpire(int serverScore, int receiverScore);
        Umpire();
        ~Umpire();

    // FUNCTIONS
        void announcePoint(); 
        void announceScore(); 
        void announceWinner(); 

    // METHODS
        int get_serverScore();
        void set_serverScore(int serverScore);
        int get_receiverScore();
        void set_receiverScore(int receiverScore);
};