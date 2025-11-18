#include <bits/stdc++.h>

using namespace std;

/* Reverse a singly linked list */

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
Node* reverse(Node* head) {
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

/* Optimal (iterative)*/

// TC - O(n), SC - O(1)
Node* reverse(Node* head) {
  Node* tmp = head;
  Node* back = nullptr;
  while (tmp != nullptr) {
    Node* front = tmp->next;
    tmp->next = back;
    back = tmp;
    tmp = front;
  }
  return back;
}

/* Optimal (recursive) */

// TC - O(n), SC - O(n)
Node* reverse(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node* new_head = reverse(head->next);
  Node* front = head->next;
  front->next = head;
  head->next = nullptr;
  return new_head;
}