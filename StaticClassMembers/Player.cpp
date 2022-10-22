#include "Player.h"

int Player::num_players{0};

Player::Player(std::string const name_val, int const health_val,
               int const xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  ++num_players;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp} {}

Player::~Player() { --num_players; }

int Player::get_num_players() { return num_players; }