#include "iostream"
using namespace std;

typedef void (*display_f)(
    void); // 原函数返回值类型 (*函数指针名) （原函数参数类型列表）
typedef void (*sum_f)(int *, int);

void my_display();
void my_sum(int *a, int b);

int main() {
  display_f display_ptr = my_display; // 将函数指针指向 my_display 函数
  sum_f sum_ptr = my_sum;
  display_ptr();

  int a = 1;
  int *a_ptr = &a;
  sum_ptr(a_ptr, 9);
  return 0;
}

void my_display() { cout << "Hello world!" << endl; }

void my_sum(int *a, int b) { cout << *a + b << endl; }
