#include <bits/stdc++.h>

using namespace std;

/* Insert head of a doubly linked list */

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
Node* insert_head(Node* head, int val) {
  Node* new_node = new Node(val, head, nullptr);
  head->prev = new_node;
  return new_node; 
}