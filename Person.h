#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include "Printable.h"
#include <string>
using namespace std;

//This is the Person class. It derives from Printable and represents a person 
//at a tennis game who each have a name, ID, age, and weight
//This is the parent class for both the Player and the Umpire class, who will each 
//inherit the data members and functions from this class

class Person : public Printable {
private:
    string name;    //Initialising all data members with data types
    int ID;
    int age;
    float weight;
    
public:
    Person(string name, int ID, int age, float weight); //full constructor
    Person();       //default constructor
    ~Person();      //destructor
    //Setter and Getter methods:
    void setName(string name);
    string getName();
    void setID(int ID);
    int getID();
    void setAge(int age);
    int getAge();
    void setWeight(float weight);
    float getWeight();
    //Alternate implementation of the print function is given
    void print();
};

#endif /* PERSON_H */