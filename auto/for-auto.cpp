#include <iostream>
using namespace std;

int main() {
  int array[] = {1, 2, 3, 4, 5};
  for (auto &e : array) {
    e *= 2;
  }

  // element is a const reference to the currently
  for (const auto &e : array) {
    // iterated array element
    cout << e << " "; // 2 4 6 8 10
  }
  cout << endl;
  return 0;
}
