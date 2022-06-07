#include <iostream>
using namespace std;

struct Node 
{
  int a;
  struct Node *left, *right;
  Node(int a) 
  {
    this->a = a;
    left = right = NULL;
  }
};

void PreorderTraversal(struct Node* node) 
{
  if (node == NULL)
    return;

  cout << node-> a << " ";
  PreorderTraversal(node->left);
  PreorderTraversal(node->right);
}

void PostorderTraversal(struct Node* node)
{
  if (node == NULL)
    return;

  PostorderTraversal(node->left);
  PostorderTraversal(node->right);
  cout << node-> a << " ";
}

void InorderTraversal(struct Node* node)
{
  if (node == NULL)
    return;

  InorderTraversal(node->left);
  cout << node-> a << " ";
  InorderTraversal(node->right);
}

int main() 
{
  struct Node* root = new Node(9);
  root->left = new Node(18);
  root->right = new Node(7);
  root->left->left = new Node(1);
  root->left->right = new Node(5);

  cout << "\nInorder traversal\n ";
  InorderTraversal(root);

  cout << "\nPreorder traversal\n ";
  PreorderTraversal(root);

  cout << "\nPostorder traversal\n ";
  PostorderTraversal(root);

  return 0;
}