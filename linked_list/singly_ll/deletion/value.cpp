#include <bits/stdc++.h>

using namespace std;

/* Delete node by value in a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(n), SC - O(1)
Node* delete_val(Node* head, int el) {
  if (head == nullptr) {
    return head;
  }
  if (head->data == el) {
    Node* tmp = head;
    head = head->next;
    delete tmp;
    return head;
  }
  Node* tmp = head;
  Node* prev = nullptr;
  while (tmp != nullptr) {
    if (tmp->data == el) {
      prev->next = tmp->next;
      delete tmp;
      break;
    }
    prev = tmp;
    tmp = tmp->next;
  }
  return head;
}
