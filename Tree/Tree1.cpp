// Traversal tree mechanism
// 1. Level ORder Traversal
// 2. Inorder/ PreOrder / PostOrder Traversal
// 3. Morris Traversal

// all left or all right is cal skew tree

// 90 , 20 , 11 , -1, -1 , 13, -1, -1, 50, -1,-1
// 20 40 60 -1  80 -1 -1 -1 -1



#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

Node *buildTree() {
  int data;
  cout << "Enter the data : " << endl;
  cin >> data;

  if (data == -1) {
    return NULL;
  }

  Node *root = new Node(data);

  cout << "Enter data for left part of " << data << "node" << endl;
  root->left = buildTree();

  cout << "Enter data for right part of " << data << "node" << endl;
  root->right = buildTree();

  return root;
}

/**
 *   Level ORder Traversal concept
 *     1. temp = q.front();
 *     2. q.pop()
 *     3. print temp
 *     4 child insert
*/
void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {
    Node *temp = q.front();

    q.pop();

    cout << temp->data << " ";

    if (temp->left) {
      q.push(temp->left);
    }

    if (temp->right) {
      q.push(temp->right);
    }
  }
}

int main() {

  Node *root = NULL;
  root = buildTree();
  levelOrderTraversal(root);

  return 0;
}
