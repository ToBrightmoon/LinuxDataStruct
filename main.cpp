//
// Created by cheng on 2023/2/17.
//
#include "list.h"
#include <iostream>
class Base {
public:
    virtual void cout(int i = 10) const {
      std::cout << "Base: " << i << std::endl;
    }
    virtual ~Base(){};
};

class Derived : public Base {
    void cout(int i = 100) const override {
      std::cout << "Derived: " << i << std::endl;
    }
};
int main() {
  const Base& b = Derived();
  b.cout();
  std::cout << "hello world" << std::endl;
  return -1;
}