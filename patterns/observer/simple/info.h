#ifndef INFO_H
#define INFO_H
#include <string>
enum class Who {FamousPerson, Peasant};

struct Info {
  Who who;
  std::string name;
  std::string lastTweet;
};

#endif
