#include <bits/stdc++.h>

using namespace std;

/* Segrregate odd and even nodes in a singly linked list */

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
Node* odd_even(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  vector<int> v;
  Node* tmp = head;
  while (tmp != nullptr && tmp->next != nullptr) {
    v.emplace_back(tmp->data);
    tmp = tmp->next->next;
  }
  v.emplace_back(tmp->data);
  tmp = head->next;
  while (tmp != nullptr && tmp->next != nullptr) {
    v.emplace_back(tmp->data);
    tmp = tmp->next->next;
  }
  v.emplace_back(tmp->data);
  tmp = head;
  int i = 0;
  while (tmp != nullptr) {
    tmp->data = v[i++];
    tmp = tmp->next;
  }
  return head;
}

// TC -  O(n), SC - O(1)
Node* even_odd(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node* odd = head;
  Node* even = head->next;
  Node* even_head = even;
  while (even != nullptr && even->next != nullptr) {
    odd->next = odd->next->next;
    even->next = even->next->next;
    odd = odd->next;
    even = even->next;
  }
  odd->next = even_head;
  return head;
}