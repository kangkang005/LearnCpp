#include <iostream>
using namespace std;

template <typename T,
          typename U> // We're using two template type parameters named T and U
T my_max(T x, U y)    // x can resolve to type T, and y can resolve to type U
{
  return (x > y) ? x : y; // uh oh, we have a narrowing conversion problem here
}

int main() {
  std::cout << my_max(2, 3.5) << '\n';

  return 0;
}
