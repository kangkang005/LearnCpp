#include <iostream>
using namespace std;

struct Node {
  int val;
};

struct Tree {
  int val;
  struct Node *left;
  struct Node *right;
};

int main() {
  // c style
  struct Tree *tree = (Tree *)malloc(sizeof(Tree));
  tree->left = (Node *)malloc(sizeof(Node));
  tree->right = (Node *)malloc(sizeof(Node));

  tree->left->val = 10;
  cout << tree->left->val << endl;

  free(tree->left);
  free(tree->right);
  free(tree);

  // c++ style
  struct Tree *tree1 = new Tree;
  tree1->left = new Node;
  tree1->right = new Node;

  tree1->left->val = 10;
  cout << tree1->left->val << endl;

  delete (tree1->left);
  delete (tree1->right);
  delete (tree1);

  return 0;
}
