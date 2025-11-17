#include <bits/stdc++.h>

using namespace std;

/* Middle of a singly linked list */

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
Node* middle(Node* head) {
  int cnt = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    ++cnt;
    tmp = tmp->next;
  }
  int middle = cnt / 2 + 1;
  tmp = head;
  while (tmp != nullptr) {
    --middle;
    if (middle == 0) {
      return tmp;
    }
    tmp = tmp->next;
  }
}

/* Tortoise Hare Algorithm */

// TC - O(n), SC - O(1)
Node* middle(Node* head) {
  Node* slow = head;
  Node* fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}