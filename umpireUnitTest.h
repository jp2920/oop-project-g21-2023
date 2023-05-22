#ifndef UMPIREUNITTEST_H
#define UMPIREUNITTEST_H

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
            // serving function
            if (umpire.serve(server) != 0) {
                cout << "test failed" << endl;
            }
        }    

};

#endif // UMPIREUNITTEST_H //