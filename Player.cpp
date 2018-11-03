#include "Player.h"



bool Player::play(Card& current_card){
  int move;
  std::cout << getName() <<", your turn - "<< '\n';
  std::cout << "Your cards: ";
  for (size_t i = 0; i <v_cards.size(); i++) {
    std::cout << "("<<i+1<<")"<<v_cards[i] << ", ";
  }
  std::cin >> move;
  if(move>(int)v_cards.size()||move<=0){
    Card c=generate_card();
    v_cards.push_back(c);
  }
  else{
    if(current_card.is_leggal(v_cards.at(move-1))){
      current_card=v_cards.at(move-1);
    }
    else{}// TBD - another input should aloud
  }
  return 0;
};

bool Player::_isWinner(){
  if(num_of_cards==0){return true;}
  return false;
}
