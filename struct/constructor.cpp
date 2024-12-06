#include <iostream>
using namespace std;

struct Node {
  int val;
  Node *next;
  Node() {
    val = 0;
    next = nullptr;
  }

  Node(int v) { val = v; }
  Node(int v, Node *n) { next = n; }

  int get_value() { return val; }
};

struct _Node {
  int val;
  _Node *next;
  _Node(int val = 100, _Node *next = nullptr) : val(val), next(next) {}
};

int main() {
  Node head(10);
  Node node1 = {2};
  Node node2{1};
  Node tail;
  head.next = &node1;
  node1.next = &node2;
  node2.next = &tail;
  cout << head.next->next->next->val << endl;
  cout << head.get_value() << endl;

  _Node _head;
  cout << _head.val << endl;

  _Node *pTail = new _Node{};
  _Node *pHead = new _Node{1, pTail};
  cout << pHead->next->val << endl;
}
