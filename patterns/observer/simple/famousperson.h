#ifndef FAMOUS_H
#define FAMOUS_H
#include "publisher.h"
#include "info.h"
#include <string>
#include <vector>

class FamousPerson : public Publisher<Info> {
  std::string name;
  std::vector<std::string> tweets;

  public:
    FamousPerson(std::string name);    
    void tweet(std::string msg);
    Info getInfo() const override;
    
};

#endif
