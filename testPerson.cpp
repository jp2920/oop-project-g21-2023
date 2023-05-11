#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    //Test the Full Constructor
    Person p("Jonty Pretorius", 1823986, 24, 78.3);

    //Testing Getter Methods
    cout << "Name: " << p.getName() << endl;
    cout << "ID: " << p.getID() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Weight: " << p.getWeight() << endl << endl;

    //Testing Setter Methods
    p.setName("Des RW");
    p.setID(1824351);
    p.setAge(20);
    p.setWeight(69.7);

    //Testing print() function
    p.print();

    //Testing user input
    string n;
    int i;
    int a;
    double w;
    //ADD IN SECTION TO CHECK USER INPUT
    cout << "Please enter your name: " << endl;
    cin >> n;
    p.setName(n);

    cout << "Please enter your ID: " << endl;
    cin >> i;
    p.setID(i);

    cout << "Please enter your age: " << endl;
    cin >> a;
    p.setAge(a);

  
    cout << "Please enter your weight: " << endl;
    cin >> w;
    p.setWeight(w);

    p.print();
    
    return 0;
}



