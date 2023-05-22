compile: main.o Printable.o Person.o Player.o Receiver.o Server.o Umpire.o 
	g++ Person.o Player.o Receiver.o Server.o Umpire.o -o main

main.o: main.cpp 
	g++ main.cpp

Printable.o: Printable.h Printable.cpp 
	g++ Printable.h Printable.cpp

Person.o: Person.h Person.cpp
	g++ Person.h Person.cpp

Player.o: Player.h Player.cpp 
	g++ Player.h Player.cpp

Receiver.o: Receiver.h Receiver.cpp
	g++ Receiver.h Receiver.cpp

Server.o: Server.h Server.cpp
	g++ Server.h Server.cpp

Umpire.o: Umpire.cpp Umpire.h 
	g++ Umpire.cpp Umpire.h 

clean: 
	rm *.o




