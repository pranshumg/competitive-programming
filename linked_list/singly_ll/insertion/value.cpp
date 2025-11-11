#include <bits/stdc++.h>

using namespace std;

/* inserting before node of a singly linked list */

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

// TC - O(n), SC - O(1)
Node* insert_value(Node* head, int el, int val) {
  if (head == nullptr) {
    return nullptr;
  }
  if (head->data == val) {
    return new Node(el, head);
  }
  Node* tmp = head;
  while (tmp != nullptr) {
    if (tmp->next->data == val) {
      Node* new_node = new Node(el, tmp->next);
      tmp->next = new_node;
      break;
    }
    tmp = tmp->next;
  }
  return head;
}