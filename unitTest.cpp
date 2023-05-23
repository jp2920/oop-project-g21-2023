#include "umpireUnitTest.h"

int main() {
    UnitTest umpireTest; 

    umpireTest.runPlayerTests();

    umpireTest.runReceiverTests();

    umpireTest.runUmpireTests();

    return 0;
}