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
	int current_index=0;
	int p_num;
	vector<Player> v_players;

	void init();
	void turn();
	void next();
	void winPrint();

public:
	//public members and functions
	Game(){};
	void start();

	Card& getCurrentCard(){return current_card;}
};
#endif
