// Section 13
// Static class members
#include <iostream>

#include "Player.h"

using namespace std;

void display_active_player() {
  cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
  display_active_player();
  Player hero{"Hero"};
  display_active_player();

  return 0;
}