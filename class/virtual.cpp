#include <iostream>
#include <string>
#include <string_view>

/*
什么是虚函数:
　　虚函数是指一个类中你希望重载的成员函数 ，当你用一个 "基类指针或引用"
指向一个继承类对象的时候，调用一个虚函数时，实际调用的是继承类的版本。
*/

class Animal {
protected:
  std::string m_name;

  // We're making this constructor protected because
  // we don't want people creating Animal objects directly,
  // but we still want derived classes to be able to use it.
  Animal(const std::string &name) : m_name{name} {}

public:
  const std::string &getName() const { return m_name; }
  virtual std::string_view speak() const { return "???"; } // virtual function
  const std::string_view eat() const { return "Food"; }
  virtual std::string_view in() const { return "Earth"; } // virtual function
};

class Cat : public Animal {
public:
  Cat(const std::string &name) : Animal{name} {}

  virtual std::string_view speak() const { return "Meow"; } // virtual function
  std::string_view eat() const { return "Mouse"; }
  std::string_view in() const { return "Zoo"; }
};

class Dog : public Animal {
public:
  Dog(const std::string &name) : Animal{name} {}

  virtual std::string_view speak() const { return "Woof"; }
  std::string_view eat() const { return "bone"; }
  std::string_view in() const { return "House"; }
};

// 指向父类对象
void Report(const Animal animal) {
  std::cout << animal.getName() << " says " << animal.speak() << ", eat "
            << animal.eat() << ", in " << animal.in() << '\n';
}

// 父类引用指向子类对象
// 这种实现，我们需要额外定义一个
// “实现函数”，其参数是基类的引用（否则不能实现多态）。这样在调用时就实现了父类引用指向子类对象。
void report(const Animal &animal) {
  std::cout << animal.getName() << " says " << animal.speak() << ", eat "
            << animal.eat() << ", in " << animal.in() << '\n';
}

void pReport(const Animal *animal) {
  std::cout << animal->getName() << " says " << animal->speak() << ", eat "
            << animal->eat() << ", in " << animal->in() << '\n';
}

int main() {
  Cat cat("Fred");
  Dog dog("Garbo");
  Report(cat);
  report(cat);
  report(dog);

  Animal *pAnimal = &dog;
  pReport(pAnimal);

  Dog *pDog = &dog;
  Animal &rAnimal = *pDog;
  report(rAnimal);

  return 0;
}
