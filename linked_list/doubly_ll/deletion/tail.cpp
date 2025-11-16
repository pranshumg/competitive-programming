#include <bits/stdc++.h>

using namespace std;

/* Delete tail of a doubly linked list */

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

// TC - O(n), SC - O(1)
Node* delete_tail(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    if (head != nullptr) {
      delete head;
    }
    return nullptr;
  }
  Node* tmp = head;
  while (tmp->next != nullptr) {
    tmp = tmp->next;
  }
  tmp->prev->next = nullptr;
  tmp->prev = nullptr;
  delete tmp; 
  return head;
}
