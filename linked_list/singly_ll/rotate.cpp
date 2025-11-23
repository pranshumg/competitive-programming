#include <bits/stdc++.h>

using namespace std;

/* Rotate a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

Node* find_nth_node(Node* tmp, int k) {
  int cnt = 0;
  while (tmp != nullptr) {
    ++cnt;
    if (cnt == k) {
      return tmp;
    }
    tmp = tmp->next;
  }
  return tmp;
}

// TC - O(n), SC - O(1)
Node* rotate(Node* head, int k) {
  if (head == nullptr || k == 0) {
    return head;
  }
  Node* tail = head;
  int len = 1;
  while (tail->next != nullptr) {
    ++len;
    tail = tail->next;
  }
  if (k % len == 0) {
    return head;
  }
  k = k % len;
  tail->next = head; 
  Node* new_tail = find_nth_node(head, len - k);
  head = new_tail->next;
  new_tail->next = nullptr;
  return head;
}