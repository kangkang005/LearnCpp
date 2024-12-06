#include "math.h"
#include <iostream>
using namespace std;

int main() {
  cout << add(10, 20) << endl; // 由于有声明该函数，所以访问成功，结果30
  cout << sub(10, 20) << endl; // 由于有声明该函数，所以访问成功，结果-10
  return 0;
}
