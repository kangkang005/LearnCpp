#include <iostream>
using namespace std;

typedef struct _point {
  int x;
  int y;
} point; // 定义类，给类一个别名

struct _hello {
  int x, y;
} hello; // 同时定义类和对象

int main() {
  point pt1;
  pt1.x = 2;
  pt1.y = 5;

  cout << "pt.x=" << pt1.x << ", pt.y=" << pt1.y << endl;

  hello.x = 8;
  hello.y = 10;

  cout << "hello.x=" << hello.x << ", hello.y=" << hello.y << endl;

  return 0;
}
