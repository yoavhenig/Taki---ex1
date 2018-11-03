#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Card.h"
using namespace std;

class Game {
private:
	//private members and functions
	Player* current_player;
	Player* _winner;
	Card current_card;
	size_t p_num;
	vector<Player> v_players;
	void init();
	void turn();

public:
	//public members and functions
	Game(){
		Card current_card;
		std::vector<Player> v_players;
	};
	void start();

	Card& getCurrentCard(){return current_card;}
};
#endif
