#include "Game.h"

inline void verify(size_t p_num){
  if(p_num<=0){
    throw "illeggal numbers of players!";
  }
}


void init(){
  cout << "========== Welcome to TAKI ==========" << '\n';
  cout << "How many players?" << '\n';
  cin >> p_num;
  verify(p_num);
  size_t c_num;
  std::cout << "How many cards?" << '\n';
  std::cin >> c_num;

  for (size_t i = 0; i < p_num; i++) {
    std::cout << "player number" <<i+1<< "name?\n";
  }
}

void turn(){

}
void Game::start(){
  current_card=generate_card();
  init();
  turn();
};
