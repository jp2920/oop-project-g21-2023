#ifndef UMPIREUNITTEST_H
#define UMPIREUNITTEST_H

#include "Printable.h"
#include "Umpire.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

#include <iostream>

using namespace std; 

class UmpireUnitTest {
    public: 
        void runUmpireTests() { 
            /* Tests for functions of UMPIRE */
                testUmpire(); 
        }      
    
    private: 
    /* Umpire test functions */
        void testUmpire() {
            Umpire umpire; 
            Server server;
            Receiver receiver; 

            // serving function
            umpire.serve(server); 

            if(umpire.get_serverScore() != server.getRoundScore()) {
                cout << "unable to retrieve server's score by the umpire\n"; 
            }


            // receiving function
            if(umpire.get_receiverScore() != receiver.getRoundScore()) {
                cout << "unable to retrieve server's score by the umpire\n";
            }

            // givePoints function
            umpire.set_serverScore(15); // start them tied
            umpire.set_receiverPoints(15); // start them tied

            umpire.givePoints(server, receiver); 

            if (umpire.get_serverPoints() != 30) {
                cout << "unable to Give points to server\n";
            }

            if (umpire.get_receiverPoints() != 30) {
                cout << "unable to Give points to receiver\n";
            }

            // checkWinner function

            umpire.set_serverPoints(50); 

            if (umpire.checkWinner(server, receiver) == 0) {
                cout << "unable to check the winner\n";
            }

        }    

};

#endif // UMPIREUNITTEST_H //