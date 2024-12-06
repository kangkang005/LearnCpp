#include <iostream>
#include <string>
#include <string_view>

class Animal {
protected:
  std::string m_name;

  // 将这个构造函数设置为受保护的，因为
  // 我们不希望用户能够直接创建 Animal 对象，
  // 但是我们仍然希望能够使用它来派生类。
  Animal(std::string_view name) : m_name{name} {}

  // To prevent slicing (covered later)
  Animal(const Animal &) = default;
  Animal &operator=(const Animal &) = default;

public:
  std::string_view getName() const { return m_name; }
  std::string_view speak() const { return "???"; }
};

class Cat : public Animal {
public:
  Cat(std::string_view name) : Animal{name} {}

  std::string_view speak() const { return "Meow"; }
};

class Dog : public Animal {
public:
  Dog(std::string_view name) : Animal{name} {}

  std::string_view speak() const { return "Woof"; }
};

int main() {
  const Cat cat{"Fred"};
  std::cout << "cat is named " << cat.getName() << ", and it says "
            << cat.speak() << '\n';

  const Dog dog{"Garbo"};
  std::cout << "dog is named " << dog.getName() << ", and it says "
            << dog.speak() << '\n';

  const Animal *pAnimal{&cat};
  std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says "
            << pAnimal->speak() << '\n';

  pAnimal = &dog;
  std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says "
            << pAnimal->speak() << '\n';

  const Cat *pCat = &cat;
  std::cout << "pCat is named " << pCat->getName() << ", and it says "
            << pCat->speak() << '\n';
  return 0;
}
