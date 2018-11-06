CXX = g++
FLAGS = -std=c++11

a.out: main.o Card.o Game.o Player.o
	$(CXX) $(FLAGS) ./ a.out
main.o: main.cpp
	$(CXX) $(FLAGS) -c main.cpp
Card.o: Card.cpp Card.h
	$(CXX) $(FLAGS) -c Card.cpp
Player.o: Player.cpp Player.h
	$(CXX) $(FLAGS) -c Player.cpp
Game.o: Game.cpp Game.h
	$(CXX) $(FLAGS) -c Game.cpp
clean:
	rm *.o a.out
