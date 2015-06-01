// shared_ptr::reset example
#include <iostream>
#include <memory>

int main () {
  std::shared_ptr<int> sp;  // empty

  sp.reset (new int);       // takes ownership of pointer
  *sp=10;
  std::cout << *sp << '\n';

  sp.reset (new int);       // deletes managed object, acquires new pointer
  *sp=20;
  std::cout << *sp << '\n';

  // as it is a smart pointer, no need to manually reset it ?
  sp.reset();               // deletes managed object

  return 0;
}
