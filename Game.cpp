#include "Game.h"

inline void verify(int c_p_num){// check the players or cards positive
  if(c_p_num<=0){
    throw invalid_argument("illeggal numbers of players or cards! must be bigger than 0");
  }
}


void Game::init(){
  cout << "========== Welcome to TAKI ==========" << '\n'<<'\n';
  cout << "How many players?" << '\n';
  cin >> p_num; //private member p_num is players
  verify(p_num);
  int c_num;
  std::cout << "How many cards?" << '\n';
  std::cin >> c_num;
  verify(c_num);

  for (auto i = 0; i < p_num; i++) {
    string name;
    cout << "player number "<<i+1<<" name?\n";
    cin >> name;
    Player p(name, c_num);
    v_players.push_back(p);
  }

  current_card=generate_card(); //init first card
  current_player=&v_players.at(current_index); //init first player - the first place at v_players
}

void Game::turn(){
  current_player->play(current_card);
}

void Game::next(){  //check who is next method
  static bool dir=0;  //the direction is forword
  if(current_card.get_sign()!=PLUS){
    if(current_card.get_sign()==CD){
      dir=!dir;  //the direction is backward
    }

    if(dir==0){
      if(current_card.get_sign()==STOP){
        current_index=(current_index+2)%p_num;
      }
      else{current_index=(current_index+1)%p_num;}
    }

    if(dir==1){
      if(current_card.get_sign()==STOP){
        current_index=(current_index-2)%p_num;
      }
      else{current_index=(current_index-1)%p_num;}
    }
}
  current_player=&v_players.at(current_index);

}

void Game::winPrint(){
    cout << '\n'<<_winner->getName()<<" wins!" << '\n';
}


void Game::start(){
  _winner=nullptr; //no one is winner at that point
  init(); //method to start the game and restart fields

  while(!_winner){
    std::cout << "current: " <<current_card<<'\n';
    turn();
    if(current_player->_isWinner()){
        _winner=current_player;
    }
    next();
  }
  winPrint();

};
