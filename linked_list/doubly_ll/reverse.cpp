#include <bits/stdc++.h>

using namespace std;

/* Reverse a doubly linked list */

class Node {
public:
  int data;
  Node* next;
  Node* prev;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }

  Node(int data, Node* next, Node* prev) {
    this->data = data;
    this->next = next;
    this->prev = prev;
  }
};

// TC - O(n), SC - O(n)
Node* reverse(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  stack<int> sk;
  Node* tmp = head;
  while (tmp != nullptr) {
    sk.push(tmp->data);
    tmp = tmp->next;
  }
  tmp = head;
  while (tmp != nullptr) {
    tmp->data = sk.top();
    sk.pop();
    tmp = tmp->next;
  }
  return head;
}

// TC - O(n), SC - O(1)
Node* reverse(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node* back = nullptr;
  Node* curr = head;
  while (curr != nullptr) {
    back = curr->prev;
    curr->prev = curr->next;
    curr->next = back;
    curr = curr->next;
  }
  return back->prev;
}