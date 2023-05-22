#include <iostream>
#include "Printable.h"
using namespace std;
//Each derived class should provide an alternate implementation of this function
//This will enable each object to be able to print its data members to the user
//If an alternate print() method is not set up to override this, dervived classes
//who use the print() method will receive the given message:

void Printable::print() {
    cout << "Implement print function for this class!" << endl;
}