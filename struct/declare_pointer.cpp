#include <iostream>
using namespace std;

struct Node {
  int val;
};

int main() {
  // apply memory space for struct pointer
  struct Node *node = (Node *)malloc(sizeof(Node));
  node->val = 10;
  cout << node->val << endl;
  // free memory
  free(node);

  // if not, report warning
  /*
  ../declare_pointer.cpp:18:20: warning: ‘node1’ is used uninitialized
  [-Wuninitialized] 18 |         node1->val = 10; |         ~~~~~~~~~~~^~~~
  ../declare_pointer.cpp:17:22: note: ‘node1’ was declared here
     17 |         struct Node *node1;
   */
  struct Node *node1;
  node1->val = 10;
  cout << node1->val << endl;
  return 0;
}
