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

class UnitTest {
    public: 
        void runUmpireTests() { 
            /* Tests for functions of UMPIRE */
            testUmpire(); 
        }      
        void runReceiverTests(){
            testReceiver(); 
        }

        void runPlayerTests() {
            testPlayer();
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
            umpire.set_serverScore(60); 
            umpire.set_receiverPoints(59);

            umpire.givePoints(server, receiver); 

            if (umpire.get_serverPoints() != 15) {
                cout << "unable to Give points to server\n";
            }

            if (umpire.get_receiverPoints() != 59) {
                cout << "unable to Give points to receiver\n";
            }

            // checkWinner function
            Umpire umpire2;
            umpire2.set_serverPoints(50); 

            if (umpire2.checkWinner(server, receiver) != 0) {
                cout << "unable to check the winner\n";
            }

        }  

        void testPlayer() {
            Player player("John", 123, 25, 70, 9, 8, 8);

            // testing constructor
            if (player.getName() != "John") {
                cout << "unable to construct name\n";
            }
            if (player.getID() != 123) {
                cout << "unable to construct ID\n";
            }
            if (player.getAge() != 25) {
                cout << "unable to construct age\n";
            }
            if (player.getWeight() != 70) {
                cout << "unable to construct weight\n";
            }            
            if (player.getPower() != 9) {
                cout << "unable to construct power\n";
            }
            if (player.getRawSpeed() != 8) {
                cout << "unable to construct speed\n";
            }            
            if (player.getRallyingAbility() != 8) {
                cout << "unable to construct Rallying ability\n";
            }



            // testing the setters
            player.setName("Des");
            player.setID(456);
            player.setAge(28);
            player.setWeight(65);
            player.setPower(8);
            player.setRawSpeed(7);
            player.setRallyingAbility(9);

            //testing the getters
            if (player.getName() != "Des") {
                cout << "unable to set and get name\n";
            }
            if (player.getID() != 456) {
                cout << "unable to set and get ID\n";
            }
            if (player.getAge() != 28) {
                cout << "unable to set and get age\n";
            }
            if (player.getWeight() != 65) {
                cout << "unable to set and get weight\n";
            }            
            if (player.getPower() != 8) {
                cout << "unable to set and get power\n";
            }
            if (player.getRawSpeed() != 7) {
                cout << "unable to set and get speed\n";
            }            
            if (player.getRallyingAbility() != 9) {
                cout << "unable to set and get Rallying ability\n";
            }
        }  

        void testReceiver() {
        // Only need to test the play function as the previous tests show the setters, getters, and constructors work            
            Server server("jonty", 123, 25, 70, 90, 80, 95, 85);
            //use the play function
            server.play(); 

            if(server.getRoundScore() < 0.0) {
                cout << "The round score has not be updated\n";
            }

            if(server.getLuck() >= 5 && server.getLuck() <= 14) {
                cout << "The luck has not been updated\n"; 
            }


        }

};

#endif // UMPIREUNITTEST_H //