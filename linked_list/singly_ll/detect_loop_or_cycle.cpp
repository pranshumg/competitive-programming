#include <bits/stdc++.h>

using namespace std;

/* Detect a loop or cycle in a singly linked list */

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
bool detect(Node* head) {
  map<Node*, int> mp;
  Node* tmp = head;
  while (tmp != nullptr) {
    if (mp.find(tmp) != mp.end()) {
      return true;
    }
    ++mp[tmp];
    tmp = tmp->next;
  }
  return false;
}

/* Tortoise Hare Algorithm */

// TC - O(n), SC - O(1)
bool detect(Node* head) {
  Node* slow = head;
  Node* fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return true;
    }
  }
  return false;
}