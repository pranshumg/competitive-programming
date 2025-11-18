#include <bits/stdc++.h>

using namespace std;

/* Starting node of a cycle in a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(n), SC - O(n)
Node* starting(Node* head) {
  map<Node*, int> mp;
  Node* tmp = head;
  while (tmp != nullptr) {
    if (mp.find(tmp) != mp.end()) {
      return tmp;
    }
    ++mp[tmp];
    tmp = tmp->next;
  }
  return nullptr;
}

/* Tortoise Hare Algorithm */

// TC - O(n), SC - O(1)
Node* starting(Node* head) {
  Node* slow = head;
  Node* fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      slow = head;
      while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
      }
      return slow;
    }
  }
  return nullptr;
}