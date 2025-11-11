#include <bits/stdc++.h>

using namespace std;

/* inserting at head of a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }

  Node(int data, Node* next) {
    this->data = data;
    this->next = next;
  }
};

// TC - O(1), SC - O(1)
Node* insert_head(Node* head, int val) {
  return new Node(val, head);
}