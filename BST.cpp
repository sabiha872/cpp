#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int value): data(value),left(nullptr),right(nullptr) {}

};
Node* root = nullptr;
Node*insertRecursive(Node*root, int key) {
  if(root == nullptr) {
    return new Node(key);
  }
  if(key < root->data)
  root->left = insertRecursive(root->left, key);
  else 
  root->right = insertRecursive(root->right, key);
  return root;
}
Node* search(Node* root, int key) {
  Node*current = root;

  while (current->data)
  if(key == current->data) {
    return current;
  }
  else if (key < current->data) {
    current = current->left;
  }
  else {
    current = current->right;
  }
  return nullptr;

}
void inOrder(Node* node) {
  if(node !=nullptr) {
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
  }
}
int main() {
  root = insertRecursive(root,30);
  insertRecursive(root,20);
  insertRecursive(root,40);
  insertRecursive(root,10); 
  insertRecursive(root,25);
  cout<<"Inorder Traversal: ";
  inOrder(root);
  cout<<endl;

  int key = 25;
  if(search(root,key))
     cout<<"Element" <<key<<"found in the BST.\n";
  else
      cout<<"Element" <<key<<"not found in the BST.\n";
      return 0;
  
}
