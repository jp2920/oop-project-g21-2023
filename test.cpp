=======
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int ID;
    int age;
    float weight;
public:
    Person(string name, int ID, int age, float weight);
    Person();
    void setName(string name);
    string getName();
    void setID(int ID);
    int getID();
    void setAge(int age);
    int getAge();
    void setWeight(float weight);
    float getWeight();
};

#endif /* PERSON_H */
>>>>>>> refs/remotes/origin/des
