#include <bits/stdc++.h>

using namespace std;

/* Delete tail in a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

// TC - O(n), SC - O(1)
Node* delete_tail(Node* head) {
  if (head == nullptr) {
    return nullptr;
  }
  if (head->next == nullptr) {
    delete head;
    return nullptr;
  }
  Node* tmp = head;
  while (tmp->next->next != nullptr) {
    tmp = tmp->next;
  } 
  delete tmp->next;
  tmp->next = nullptr;
  return head;
}