#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "Printable.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"
#include "Umpire.h"

using namespace std;

int main(){
    //Seed the random number generator using the current time
    srand(time(nullptr));
    
    Umpire U; 

    // Server input
    Server server;

    cout << "What is the Server's name?\n";  
    string name; 
    cin >> name;
    server.setName(name);

    //enter the age
    cout << "What is the Server's Age\n";
    int age;
    cin >> age;
    server.setAge(age);


    server.setWeight(80);
    server.setPower(8);
    server.setRawSpeed(800);
    server.setRallyingAbility(7);
    server.setServingAbility(10);
    server.setLuck();
    
    this_thread::sleep_for(chrono::milliseconds(150));

    Receiver Des;
    Des.setName("Des");
    Des.setAge(20);
    Des.setWeight(65);
    Des.setPower(8);
    Des.setRawSpeed(700);
    Des.setRallyingAbility(9);
    Des.setReceivingAbility(8);
    Des.setLuck();
   
    cout << server.getRoundScore() << endl;
    cout << Des.getRoundScore() << endl;

    int x = 1;

    while (x == 1){
        U.serve(server);
        this_thread::sleep_for(chrono::milliseconds(800));
        U.receive(Des);

        U.givePoints(server, Des);
        x = U.checkWinner(server, Des);
        U.announcePoints();
    }
    
    cout << "Thanks for playing!" << endl;


    return 0;
}