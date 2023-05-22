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

using namespace std;

int main(){
    //Seed the random number generator using the current time
    srand(time(nullptr));
    
    Server Jonty;
    Jonty.setName("Jonty");
    Jonty.setAge(25);
    Jonty.setWeight(80);
    Jonty.setPower(8);
    Jonty.setRawSpeed(800);
    Jonty.setRallyingAbility(7);
    Jonty.setServingAbility(9);
    Jonty.setLuck();
    
   this_thread::sleep_for(chrono::milliseconds(150));

    Receiver Des;
    Des.setName("Des");
    Des.setAge(20);
    Des.setWeight(65);
    Des.setPower(7);
    Des.setRawSpeed(700);
    Des.setRallyingAbility(8);
    Des.setReceivingAbility(8);
    Des.setLuck();
   

    Jonty.play();
    Jonty.print();

    Des.play();
    Des.print();

    return 0;
}