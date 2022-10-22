#include "Player.h"

Player::Player(std::string const name_val, int const health_val,
               int const xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp} {}

Player::~Player() {}