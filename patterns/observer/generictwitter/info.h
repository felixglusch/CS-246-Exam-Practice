#ifndef INFO_H
#define INFO_H

#include <string>

enum class Who {PersonIamFollowing};

struct Info {
  Who who;
  std::string name;
  std::string msg;
};

#endif
