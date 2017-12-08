#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "publisher.h"
#include "observer.h"
#include "info.h"

class Person : public Observer<Info>, public Publisher<Info> {
  std::string name;
  std::vector<std::string> tweets;
  public:
    Person(std::string name);
    void tweet(std::string msg);
    std::vector<std::string> getTweets() const;
    void retweet(size_t id) const;
    void notify(Publisher<Info> &whoNotified) override;
    Info getInfo() const override;
};

#endif
