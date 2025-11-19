#include <bits/stdc++.h>

using namespace std;

/* Remove nth node from the end of a singly linked list */

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
Node* delete_nth_node(Node* head, int n) {
  int cnt = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    ++cnt;
    tmp = tmp->next;
  }
  if (cnt == n) {
    Node* new_head = head->next;
    delete head;
    return new_head;
  }
  tmp = head;
  int res = cnt - n;
  while (tmp != nullptr) {
    --res;
    if (res == 0) {
      break;
    }
    tmp = tmp->next;
  }
  Node* del_node = tmp->next;
  tmp->next = tmp->next->next;
  delete del_node;
  return head;
}

// TC - O(n), SC - O(1)
Node* delete_nth_node(Node* head, int n) {
  Node* fast = head;
  for (int i = 0; i < n; ++i) {
    fast = fast->next;
  }
  if (fast == nullptr) {
    Node* new_head = head->next;
    delete head;
    return new_head;
  }
  Node* slow = head;
  while (fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next;
  }
  Node* del_node = slow->next;
  slow->next = slow->next->next;
  delete del_node;
  return head;
}