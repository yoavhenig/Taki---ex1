#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
using namespace std;

class Player {
private:
	string name;
	int num_of_cards;
	//vector of cards
	vector<Card> v_cards;
	//private members

public:
	//public members
	Player(string name, int num_of_cards):name(name),num_of_cards(num_of_cards){
		for (size_t i = 0; i < v_cards.size(); i++) {
			v_cards[i]=generate_card();
		}
	};
	string getName(){return name;}
	bool play(Card&);
	bool _isWinner();
};
#endif
