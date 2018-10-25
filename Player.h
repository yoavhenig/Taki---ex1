#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
class Player {
private:
	string name;
	int num_of_cards;
	//vector of cards
	//private members

public:
	//public members
	Player(string name, int num_of_cards);
	~Player();

	bool play(Card&);
};
#endif
