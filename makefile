TARGET = a.out
SOURCES = Card.cpp Game.cpp main.cpp Player.cpp Card.h Game.h Player.h
CPP = Card.cpp Game.cpp main.cpp Player.cpp
CC = g++ -std=c++11

$(TARGET) : $(SOURCES)
		$(CC) $(CPP) -o $(TARGET)


# taki.out : Card.cpp Game.cpp main.cpp Player.cpp Card.h Game.h Player.h
# 	g++ Card.cpp Game.cpp main.cpp Player.cpp -o taki.out
