#include <bits/stdc++.h>

using namespace std;

/* Insert before given node of a doubly linked list */

class Node {
public:
  int data;
  Node* next;
  Node* prev;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }

  Node(int data, Node* next, Node* prev) {
    this->data = data;
    this->next = next;
    this->prev = prev;
  }
};

// TC - O(1), SC - O(1)
void insert_node(Node* node, int val) {
  Node* new_node = new Node(val, node, node->prev);
  node->prev->next = new_node;
  node->prev = new_node;
}