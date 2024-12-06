#include <iostream>
#define func(x) x * 10 - 2
#define func1()                                                                \
  print1();                                                                    \
  print2();
#define func2()                                                                \
  do {                                                                         \
    print1();                                                                  \
    print2();                                                                  \
  } while (0)
using namespace std;

// Macros do not do type-checking, but inline do it
static inline int Func(int x) { return x * 10 - 2; }

void print1() { printf("Hello 1\n"); }

void print2() { printf("Hello 2\n"); }

int main() {
  // #define 是在预处理的时候进行直接替换
  int res = 4 * func(0.3); // int res = 4*0.3*10-2;
  cout << res << endl;     // 10 not 4

  res = 4 * Func(0.3);
  cout << res << endl; // -8

  // print "Hello 2"
  if (0)
    func1(); // if (0) print1(); print2();

  // print "False"
  if (0)
    func2();
  else
    printf("False\n"); // if (0) do { print1(); print2() } while(0); else
                       // printf("False\n");
}
