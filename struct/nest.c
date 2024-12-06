#include <stdio.h>
#include <stdlib.h>

void pos(int id) { printf("Begin Pos %d\n", id); }

struct Node {
  int val;

  void (*Pos)(int id);
};

struct Tree {
  int val;
  struct Node *left;
  struct Node *right;
};

int main(void) {
  struct Tree *tree = malloc(sizeof(tree));
  tree->left = malloc(sizeof(tree->left));
  tree->right = malloc(sizeof(tree->right));
  tree->left->Pos = pos;

  tree->left->val = 10;
  printf("%d\n", tree->left->val);
  tree->left->Pos(1);

  free(tree->left);
  free(tree->right);
  free(tree);

  return 0;
}
