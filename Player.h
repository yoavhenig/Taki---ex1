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
		if(num_of_cards<0){
			throw invalid_argument("illeggal numbers of cards!");
		}
		for (auto i = 0; i < num_of_cards; i++) {
			v_cards.push_back(generate_card());
		}
	};

	Player(const Player& player){
		this->name=player.name; this->num_of_cards=player.num_of_cards;
		for (int i = 0; i < num_of_cards; i++) {
			this->v_cards.push_back(player.v_cards.at(i));
		}
	}

	Player operator=(const Player& player) {
		this->name=player.name; this->num_of_cards=player.num_of_cards;
		for (int i = 0; i < num_of_cards; i++) {
			this->v_cards.push_back(player.v_cards.at(i));
		}
		return *this;
	}

	string getName(){return this->name;}
	bool play(Card&);
	bool _isWinner();
};
#endif
