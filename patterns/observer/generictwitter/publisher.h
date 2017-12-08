#ifndef PUB_H
#define PUB_H

#include <vector>
#include <memory>

template<typename InfoType> class Observer;

template<typename InfoType> class Publisher {
  std::vector<std::shared_ptr<Observer<InfoType>>> observers;
  public:
    void attach(std::shared_ptr<Observer<InfoType>> ob);
    void notifyObservers();   
    virtual InfoType getInfo() const = 0;
};

template<typename InfoType> 
void Publisher<InfoType>::attach(std::shared_ptr<Observer<InfoType>> ob) {
  observers.emplace_back(ob);
}

template<typename InfoType>
void Publisher<InfoType>::notifyObservers() {
  for (auto &ob : observers) ob->notify(*this);
}

#endif

