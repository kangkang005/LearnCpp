#include <iostream>
using namespace std;

template <typename T>
T my_max(T x, T y) // function template for max(T, T)
{
  return (x > y) ? x : y;
}

int main() {
  cout << my_max<int>(1, 2)
       << '\n'; // instantiates and calls function max<int>(int, int)
  cout << my_max<int>(4, 3)
       << '\n'; // calls already instantiated function max<int>(int, int)
  cout << my_max<>(4, 3) << '\n'; // deduces max<int>(int, int) (non-template
                                  // functions not considered)
  cout << my_max<double>(1, 2)
       << '\n'; // instantiates and calls function max<double>(double, double)

  return 0;
}
