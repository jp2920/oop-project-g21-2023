#ifndef PRINTABLE_H
#define PRINTABLE_H
//This is an abstract class from which the Person class is derived
//The pure virtual function print() will be inherited by all derived classes

class Printable {
public:
    virtual void print() = 0;
};

#endif // PRINTABLE_H