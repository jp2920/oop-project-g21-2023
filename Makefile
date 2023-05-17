CXX = g++
CXXFLAGS = -Wall -g
OBJ = Printable.o Person.o Player.o Server.o Receiver.o

all: test

test: $(OBJ) main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

Printable.o: Printable.cpp Printable.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Player.o: Player.cpp Player.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Server.o: Server.cpp Server.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Receiver.o: Receiver.cpp Receiver.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o test