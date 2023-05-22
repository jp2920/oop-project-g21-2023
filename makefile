compile: Printable.o Person.o Player.o Receiver.o Server.o Umpire.o main.o 
	g++ Printable.o Person.o Player.o Receiver.o Server.o Umpire.o main.o -o main

main.o: main.cpp 
	g++ -c main.cpp

Printable.o: Printable.h Printable.cpp 
	g++ -c Printable.h Printable.cpp

Person.o: Person.h Person.cpp
	g++ -c Person.h Person.cpp

Player.o: Player.h Player.cpp 
	g++ -c Player.h Player.cpp

Receiver.o: Receiver.h Receiver.cpp
	g++ -c Receiver.h Receiver.cpp

Server.o: Server.h Server.cpp
	g++ -c Server.h Server.cpp

Umpire.o: Umpire.cpp Umpire.h 
	g++ -c Umpire.cpp Umpire.h 

git:
	git add .
	git commit -m "commit"
	git push

clean: 
	rm *.o

UnitTest:
	




