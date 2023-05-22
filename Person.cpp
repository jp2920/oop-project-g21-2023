#include "Person.h"
#include <string>
#include <iostream>

using namespace std;


//Full constructor
Person::Person(string name, int ID, int age, float weight) {
    this->name = name;
    this->ID = ID;
    this->age = age;
    this->weight = weight;
}
//Default Constructor
Person::Person(){
    name = "";
    ID = 0;
    age = 0;
    weight = 0.0;
}

//Destructor
Person::~Person() {}

//Setter and Getter Methods
void Person::setName(string name) {
    this->name = name;
}

string Person::getName() {
    return name;
}

void Person::setID(int ID) {
    this->ID = ID;
}

int Person::getID() {
    return ID;
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() {
    return age;
}

void Person::setWeight(float weight) {
    this->weight = weight;
}

float Person::getWeight() {
    return weight;
}

//This will override the virtual print() method and will print data members 
//for a Person object
void Person:: print(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: "<< getAge() << endl;
    cout << "Weight: " << getWeight() << endl << endl;
}