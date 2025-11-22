#include <bits/stdc++.h>

using namespace std;

/* Sort a singly linked list of 0's, 1's and 2's */

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
Node* sort_ll(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    if (tmp->data == 0) {
      ++cnt0;
    } else if (tmp->data == 1) {
      ++cnt1;
    } else {
      ++cnt2;
    }
    tmp = tmp->next;
  }
  tmp = head;
  while (tmp != nullptr) {
    if (cnt0) {
      tmp->data = 0, --cnt0;
    } else if (cnt1) {
      tmp->data = 1, --cnt1;
    } else {
      tmp->data = 2, --cnt2;
    }
    tmp = tmp->next;
  }
  return head;
}

// TC - O(n), SC - O(1)
Node* sort_ll(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node* zero_head = new Node(-1);
  Node* one_head = new Node(-1);
  Node* two_head = new Node(-1);
  Node* zero = zero_head;
  Node* one = one_head;
  Node* two = two_head;
  Node* tmp = head;
  while (tmp != nullptr) {
    if (tmp->data == 0) {
      zero->next = tmp;
      zero = tmp;
    } else if (tmp->data == 1) {
      one->next = tmp;
      one = tmp;
    } else {
      two->next = tmp;
      two = tmp;
    }
    tmp = tmp->next;
  }
  zero->next = one_head->next ? one_head->next : two_head->next;
  one->next = two_head->next;
  two->next = nullptr;
  Node* new_head = zero_head->next;
  delete zero_head;
  delete one_head;
  delete two_head;
  return new_head;
}