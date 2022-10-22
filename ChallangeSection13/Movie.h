#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
 private:
  std::string name;
  int watch_number;

 public:
  std::string get_name() const { return name; }
  int get_watch_number() const { return watch_number; }
  void increment_watch_number() { watch_number++; }
};

#endif  // _MOVIE_H_