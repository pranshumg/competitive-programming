#include <bits/stdc++.h>

using namespace std;

/* Delete middle node in a singly linked list */

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
Node* delete_middle(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return nullptr;
  }
  int cnt = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    ++cnt;
    tmp = tmp->next;
  }
  int res = cnt / 2;
  tmp = head;
  while (tmp != nullptr) {
    --res;
    if (res == 0) {
      break;
    }
    tmp = tmp->next;
  }
  Node* middle = tmp->next;
  tmp->next = tmp->next->next;
  delete middle;
  return head;
}

/* Tortoise Hare Algortihm */

// TC - O(n), SC - O(1)
Node* delete_middle(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return nullptr;
  }
  Node* slow = head;
  Node* fast = head;
  fast = fast->next->next;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  Node* middle = slow->next;
  slow->next = slow->next->next;
  delete middle;
  return head;
}