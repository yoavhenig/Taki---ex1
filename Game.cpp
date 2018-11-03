#include "Game.h"

inline void verify(size_t c_p_num){// check the details are alright
  if(c_p_num<=0){
    throw "illeggal numbers of players!";
  }
}


void Game::init(){
  //current_card = Card::generate_card();
  cout << "========== Welcome to TAKI ==========" << '\n';
  cout << "How many players?" << '\n';
  cin >> p_num;
  verify(p_num);
  size_t c_num;
  std::cout << "How many cards?" << '\n';
  std::cin >> c_num;
  verify(c_num);

  for (size_t i = 0; i < p_num; i++) {
    string name;
    std::cout << "player number" <<i+1<< "name?\n";
    std::cin >> name;
    Player p(name, c_num);
    v_players.push_back(p);
  }
}

void Game::turn(){

}
void Game::start(){
  _winner=nullptr;
  current_card=generate_card();
  current_player=&v_players[0];
  init();
  while(!_winner){
    std::cout << "current: " <<current_card<<'\n';
    turn();
    if(current_player->_isWinner()){
        _winner=current_player;
    }
  }
};
