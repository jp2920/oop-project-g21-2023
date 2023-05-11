#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include "Printable.h"
#include <string>
using namespace std;

class Person : public Printable {
private:
    string name;
    int ID;
    int age;
    float weight;
public:
    Person(string name, int ID, int age, float weight);
    Person();
    ~Person();
    void setName(string name);
    string getName();
    void setID(int ID);
    int getID();
    void setAge(int age);
    int getAge();
    void setWeight(float weight);
    float getWeight();
    void print();
};

#endif /* PERSON_H */