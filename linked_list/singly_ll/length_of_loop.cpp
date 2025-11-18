#include <bits/stdc++.h>

using namespace std;

/* Length of a loop in a singly linked list */

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
int length(Node* head) {
  map<Node*, int> mp;
  int cnt = 1;
  Node* tmp = head;
  while (tmp != nullptr) {
    if (mp.find(tmp) != mp.end()) {
      return cnt - mp[tmp];
    }
    mp[tmp] = cnt++;
    tmp = tmp->next;
  }
  return 0;
}

/* Tortoise Hare Algorithm */

// TC - O(n), SC - O(1)
int length(Node* head) {
  Node* slow = head;
  Node* fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      int cnt = 1;
      fast = fast->next;
      while (slow != fast) {
        ++cnt;
        fast = fast->next;
      }
      return cnt;
    }
  }
  return 0;
}