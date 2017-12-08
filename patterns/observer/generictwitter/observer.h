#ifndef OBS_H
#define OBS_H

template<typename InfoType> class Publisher;

template<typename InfoType> class Observer {
  public:
    virtual void notify(Publisher<InfoType> &whoNotified) = 0;
    virtual ~Observer() = default;
};

#endif
