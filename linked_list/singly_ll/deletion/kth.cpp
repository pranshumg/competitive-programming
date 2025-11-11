#include <bits/stdc++.h>

using namespace std;

/* Delete kth node in a singly linked list */

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
Node* delete_kth(Node* head, int k) {
  if (head == nullptr) {
    return head;
  }
  if (k == 1) {
    Node* tmp = head;
    head = head->next;
    delete tmp;
    return head;
  }
  int cnt = 0;
  Node* tmp = head;
  Node* prev = nullptr;
  while (tmp != nullptr) {
    ++cnt;
    if (cnt == k) {
      prev->next = tmp->next;
      delete tmp;
      break;
    }
    prev = tmp;
    tmp = tmp->next;
  }
  return head;
}