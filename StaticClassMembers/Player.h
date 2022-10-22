#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
 private:
  std::string name;
  int health;
  int xp;

 public:
  std::string get_name() const { return name; }
  int get_health() const { return health; }
  int get_xp() const { return xp; }
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
  // Copy constructor
  Player(const Player &source);
  // Destructor
  ~Player();
};

#endif  // _PLAYER_H_