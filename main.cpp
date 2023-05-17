#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

#include "Printable.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"

using namespace std;

int main(){

    
    Server Jonty("Jonty", 1823986, 21, 75.2, 8, 6, 8);
    Jonty.print();

    Receiver Des("Desmond", 1824351, 20, 69.5, 6, 8, 8);
    Des.print();

    Jonty.setRoundScore(6);
    Des.setRoundScore(5);


    float x = Jonty.getRoundScore();
    float y = Des.getRoundScore();
    float winningScore;
    string winner;

    if (x > y){
        winningScore = x;
        winner = "Jonty";
    }else{
        winningScore = y;
        winner = "Des";
    }
    
    cout << "The winner is " << winner << " and the winning score is " << winningScore << endl;

    return 0;
}