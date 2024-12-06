#include <iostream>
using namespace std;

// 类模板
template <class T1, class T2> class Data {
private:
  T1 a;
  T2 b;

public:
  Data() { cout << "Data的无参构造" << endl; }
  Data(T1 a, T2 b) {
    this->a = a;
    this->b = b;
    cout << "Data的有参构造" << endl;
  }
  void showData() { cout << a << " " << b << endl; }
};

int main() {
  // 类模板实例化对象
  // Data ob(100,200);// error,必须指定类型
  // 类模板实例化对象，必须指明T的类型
  Data<int, int> ob(300, 400);
  ob.showData();

  Data<int, char> ob2(100, 'A');
  ob2.showData();

  return 0;
}
