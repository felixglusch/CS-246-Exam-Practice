#include "famousperson.h"

FamousPerson::FamousPerson(std::string name) : name{name} {}

void FamousPerson::tweet(std::string tweet) {
 tweets.emplace_back(tweet); 
}

Info FamousPerson::getInfo() const {
  Info info {Who::FamousPerson, name, tweets.at(tweets.size() - 1)};
  return info;
}
