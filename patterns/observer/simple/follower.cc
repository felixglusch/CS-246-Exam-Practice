#include "follower.h"
#include "info.h"
#include <iostream>
#include "publisher.h"

Follower::Follower(std::string name) : name{name} {}

void Follower::notify(Publisher<Info> &whoNotified) {
  if (whoNotified.getInfo().who == Who::FamousPerson) {
    std::cout << name << " has a notification." << std::endl;
    std::cout << whoNotified.getInfo().name << " just tweeted!" << std::endl; 
    std::cout << "Tweet: " << whoNotified.getInfo().lastTweet << std::endl;
  } else {
    std::cout << "Follower::notify() -> IDK who notified" << std::endl;
  }
}
