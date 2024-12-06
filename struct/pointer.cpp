#include <iostream>
using namespace std;

struct Node {
  int *someIntPointer, someInt; // here comes the surprise
  Node *next;
};

int main() {
  Node s1; // we allocated an object on stack, not in heap

  s1.someInt = 1; // someInt is of type 'int', not 'int*' - value/pointer
                  // modifier is individual
  s1.someIntPointer = &s1.someInt;
  *s1.someIntPointer = 2; // now s1.someInt has value '2'
  s1.next = &s1;
  s1.next->someInt = 3;         // now s1.someInt has value '3'
  s1.next->someInt = 3;         // same as above line
  *s1.next->someIntPointer = 4; // now s1.someInt has value '4'

  Node s2;
  s2 = s1; //'NO WAY' the compiler will say. Go define your '=' operator and
           //come back.

  // OK, assume we have '=' defined in Node

  s2.someInt =
      0; // s2.someInt == 0, but s1.someInt is still 5 - it's two completely
         // different objects, not the references to the same one

  Node &s3 = s1;
  s3.someInt = 10; // s3.someInt == 10, and s1.someInt is 10

  cout << "S1: " << s1.someInt << endl;
  cout << "S2: " << s2.someInt << endl;
  cout << "S3: " << s3.someInt << endl;

  return 0;
}
