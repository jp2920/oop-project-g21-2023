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

    // Read in the read me file
    

    //Seed the random number generator using the current time
    srand(time(nullptr));
    
    Umpire umpire; 

    // Server input
    Server server;

    cout << "What is the Server's name?\n";  
    string name ; 
    cin >> name;
    server.setName(name);

    //enter the age
    cout << "What is the server's Age\n";
    int age;
    cin >> age;
    server.setAge(age);

    // enter weight
    cout << "What is the Server's weight\n"; 
    int weight;
    cin >> weight;
    server.setWeight(weight);

    // enter power
    cout << "What is the Server's power\n"; 
    int power;
    cin >> power;
    server.setPower(power);

    // enter speed
    cout << "What is the Server's speed\n"; 
    int speed;
    cin >> speed;
    server.setRawSpeed(speed);

    // enter rallying ability
    cout << "What is the Server's rallying ability\n"; 
    int rallyingAbility;
    cin >> rallyingAbility;
    server.setRallyingAbility(rallyingAbility);

    // enter serving ability
    cout << "What is the Server's serving ability\n"; 
    int servingAbility;
    cin >> servingAbility;   
    server.setServingAbility(servingAbility);

    server.setLuck();
    
    this_thread::sleep_for(chrono::milliseconds(150));




    /* Receiver input */
    Receiver receiver;


    cout << "What is the receiver's name?\n";  
    string nameReceiver; 
    cin >> nameReceiver;
    receiver.setName(nameReceiver);

    //enter the age
    cout << "What is the receiver's Age\n";
    int ageReceiver;
    cin >> ageReceiver;
    receiver.setAge(ageReceiver);

    // enter weight
    cout << "What is the receiver's weight\n"; 
    int weightReceiver;
    cin >> weightReceiver;
    receiver.setWeight(weightReceiver);

    // enter power
    cout << "What is the receiver's power\n"; 
    int powerReceiver;
    cin >> powerReceiver;
    receiver.setPower(powerReceiver);

    // enter speed
    cout << "What is the receiver's speed\n"; 
    int speedReceiver;
    cin >> speedReceiver;
    receiver.setRawSpeed(speedReceiver);

    // enter rallying ability
    cout << "What is the receiver's rallying ability\n"; 
    int rallyingAbilityReceiver;
    cin >> rallyingAbilityReceiver;
    receiver.setRallyingAbility(rallyingAbilityReceiver);

    // enter receiving ability
    cout << "What is the receiver's receiving ability\n"; 
    int receivingAbility;
    cin >> receivingAbility;   
    receiver.setReceivingAbility(receivingAbility);

    receiver.setLuck();
   
    // Starting score for the game
    cout << "The Server's score is: " << server.getRoundScore() << endl;
    cout << "The Server's score is: " << receiver.getRoundScore() << endl;

    int x = 1;

    while (x == 1) {
        umpire.serve(server);

        this_thread::sleep_for(chrono::milliseconds(800));
        
        umpire.receive(receiver);

        umpire.givePoints(server, receiver);
        x = umpire.checkWinner(server, receiver);
        umpire.announcePoints();
    }
    
    cout << "Thanks for playing!" << endl;


    return 0;
}


/*

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
} */