#include "person.h"
#include "publisher.h"
int main() {
  Person a {"Felix"};
  Person b {"Akshay"};
  
  a.attach(std::make_shared<Person>(b)); // b observes a, aka b follows a
  b.attach(std::make_shared<Person>(a));

  a.tweet("Hey I had breakfast");  
  b.tweet("Hey I had dinner");  


  
}
