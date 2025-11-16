#include <bits/stdc++.h>

using namespace std;

/* Delete head of a doubly linked list */

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
Node* delete_head(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    if (head != nullptr) {
      delete head;
    }
    return nullptr;
  }
  Node* tmp = head;
  head = head->next;
  head->prev = nullptr;
  tmp->next = nullptr;
  delete tmp;
  return head;
}
