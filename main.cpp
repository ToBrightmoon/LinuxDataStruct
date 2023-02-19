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

class Base2 {
public:
    virtual void cy() const {
      std::cout << "Base2" << std::endl;
    }
};
class Derived : public Base , public Base2{
    void cout(int i = 100) const override {
      std::cout << "Derived: " << i << std::endl;
    }

    void cy() const override {
      std::cout << "Derived cy" << std::endl;
    }
};


int main() {
  const Base& b = Derived();
  const Base2& b2 = Derived();
  b.cout();
  b2.cy();
  std::cout << "hello world" << std::endl;
  return -1;
}