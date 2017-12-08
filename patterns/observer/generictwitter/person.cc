#include "person.h"
#include <iostream>

Person::Person(std::string name) : name{name} {}

void Person::tweet(std::string msg) {
  tweets.emplace_back(msg);
  notifyObservers();
}

std::vector<std::string> Person::getTweets() {
  return tweets;
}

void Person::retweet(size_t id, const Person &other) const {
  tweet(other.tweets.at(id));
}

void Person::notify(Publisher<Info> &whoNotified) {
  Info info = whoNotified.getInfo();

  if (info.who == Who::PersonIamFollowing) {
    std::cout << name << " just got a notification from " << info.name << std::endl;
    std::cout << "Tweet: " << info.msg << std::endl;
  }
}

Info Person::getInfo() const {
  Info info {Who::PersonIamFollowing, name, tweets.at(tweets.size() - 1)};
  return info;
}
