#include "famousperson.h"
#include "follower.h"

int main() {
  FamousPerson a {"John Doe"};

  Follower b {"Felix"};
  a.attach(std::make_shared<Follower>(b)); // attach fn
  
  a.tweet("Hello I had eggs for breakfast lolol");
  a.notifyObservers();

  return 0;
}
