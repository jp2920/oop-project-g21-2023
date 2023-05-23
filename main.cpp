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

    Server Jonty;
    Jonty.setName("Jonty");
    Jonty.setAge(25);
    Jonty.setWeight(80);
    Jonty.setPower(8);
    Jonty.setRawSpeed(800);
    Jonty.setRallyingAbility(7);
    Jonty.setServingAbility(10);
    Jonty.setLuck();
    
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
   
    cout << Jonty.getRoundScore() << endl;
    cout << Des.getRoundScore() << endl;

    int x = 1;
    while (x == 1){
        U.serve(Jonty);
        this_thread::sleep_for(chrono::milliseconds(800));
        U.receive(Des);

        U.givePoints(Jonty, Des);
        x = U.checkWinner(Jonty, Des);
        U.announcePoints();
    }
    
    cout << "Thanks for playing!" << endl;


    return 0;
}