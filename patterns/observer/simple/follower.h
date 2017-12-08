#ifndef FOLLOWER_H
#define FOLLOWER_H

#include "info.h"
#include "observer.h"
#include <string>

class Follower : public Observer<Info> {
  std::string name;
  
  public:
    Follower(std::string name);
    void notify(Publisher<Info> &whoNotified) override;

};

#endif
