#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <fstream>

#include "Printable.h"
#include "Person.h"
#include "Player.h"
#include "Server.h"
#include "Receiver.h"
#include "Umpire.h"

using namespace std;

int main(){

    // Read in the read me file


    // path to the file
    string file_path = "/home/pretoriusjo/oop-project-g21-2023/README.md";

    // Create an input file stream
    ifstream file(file_path);
    
    // Check if the file exists and can be opened
    if (file.is_open()) {
        string line;

        // Read and print each line of the file
        while (getline(file, line)) {
            std::cout << line << endl;
        }

        // Close the file stream
        file.close();
    } else {
        cout << "Failure to open the file" << endl;
    }


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
    int age = 0;
    bool validInput = false;
    while (!validInput) {
        cout << "What is the server's age? (between 0 and 100)\n";
        cin >> age;

        if (cin.fail() || age < 0 || age > 100) {
            cout << "Invalid input. Age should be an integer between 0 and 100." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    server.setAge(age);

    // enter weight
    float weight;
    validInput = false;
    while (!validInput) {
        cout << "What is the server's weight? (between 0 and 150)\n";
        cin >> weight;
        if (cin.fail() || weight < 0 || weight > 150) {
            cout << "Invalid input. Weight should be a value between 0 and 150." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    server.setWeight(weight);

    //enter power
    int power;
    validInput = false;
    while (!validInput) {
        cout << "What is the server's power? (between 1 and 10)\n";
        cin >> power;
        if (cin.fail() || power < 1 || power > 10) {
            cout << "Invalid input. Power should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    server.setPower(power);

    //enter speed
    int speed;
    validInput = false;
    while (!validInput) {
        cout << "What is the server's speed? (between 500 and 1500)\n";
        cin >> speed;
        if (cin.fail() || speed < 500 || speed > 1500) {
            cout << "Invalid input. Speed should be an integer between 500 and 1500." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    server.setRawSpeed(speed);

    // enter rallying ability
    int rally;
    validInput = false;
    while (!validInput) {
        cout << "What is the server's rallying ability? (between 1 and 10)\n";
        cin >> rally;
        if (cin.fail() || rally < 1 || rally > 10) {
            cout << "Invalid input. Rallying ability should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    server.setRallyingAbility(rally);

    //enter serving ability
    int serve;
    validInput = false;
    while (!validInput) {
        cout << "What is the server's serving ability? (between 1 and 10)\n";
        cin >> serve;
        if (cin.fail() || serve < 1 || serve > 10) {
            cout << "Invalid input. Serving ability should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }

    server.setLuck();

    this_thread::sleep_for(chrono::milliseconds(150));




    /* Receiver input */
    Receiver receiver;
    cout << "What is the receiver's name?\n";  
    string nameReceiver; 
    cin >> nameReceiver;
    receiver.setName(nameReceiver);

    //enter the age
    age = 0;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's age? (between 0 and 100)\n";
        cin >> age;
        if (cin.fail() || age < 0 || age > 100) {
            cout << "Invalid input. Age should be an integer between 0 and 100." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    receiver.setAge(age);

    //enter weight
    weight = 0;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's weight? (between 0 and 150)\n";
        cin >> weight;
        if (cin.fail() || weight < 0 || weight > 150) {
            cout << "Invalid input. Weight should be a value between 0 and 150." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    receiver.setWeight(weight);

    // enter power
    power = 0;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's power? (between 1 and 10)\n";
        cin >> power;
        if (cin.fail() || power < 1 || power > 10) {
            cout << "Invalid input. Power should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    receiver.setPower(power);

    // enter speed
    speed = 0;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's speed? (between 500 and 1500)\n";
        cin >> speed;
        if (cin.fail() || speed < 500 || speed > 1500) {
            cout << "Invalid input. Speed should be an integer between 500 and 1500." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    receiver.setRawSpeed(speed);

    // enter rallying ability
    rally = 0;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's rallying ability? (between 1 and 10)\n";
        cin >> rally;
        if (cin.fail() || rally < 1 || rally > 10) {
            cout << "Invalid input. Rallying ability should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }
    receiver.setRallyingAbility(rally);

    // enter receiving ability
    int receive;
    validInput = false;
    while (!validInput) {
        cout << "What is the receiver's receiving ability? (between 1 and 10)\n";
        cin >> receive;
        if (cin.fail() || receive < 1 || receive > 10) {
            cout << "Invalid input. Receiving ability should be an integer between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            validInput = true;
        }
    }  
    receiver.setReceivingAbility(receive);

    receiver.setLuck();

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

    cout << "\n";
    umpire.printScoreboard();


    return 0;
}






/*

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


*/