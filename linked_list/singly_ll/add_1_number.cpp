#include <bits/stdc++.h>

using namespace std;

/* Add 1 number represented by a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }

  Node(int data, Node* next) {
    this->data = data;
    this->next = next;
  }
};

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

/* Iterative */

// TC - O(n), SC - O(1)
Node* add1(Node* head) {
  head = reverse(head);
  Node* tmp = head;
  int carry = 1;
  while (tmp != nullptr) {
    tmp->data += carry;
    if (tmp->data < 10) {
      carry = 0;
      break;
    } else {
      tmp->data = 0;
    }
    tmp = tmp->next;
  }
  head = reverse(head);
  if (carry) {
    Node* new_node = new Node(1, head);
    return new_node;
  }
  return head;
}

int helper(Node* tmp) {
  if (tmp == nullptr) {
    return 1;
  }
  int carry = helper(tmp->next);
  tmp->data += carry;
  if (tmp->data < 10) {
    return 0;
  }
  tmp->data = 0;
  return 1;
}

/* Recursive */

// TC - O(n), SC - O(n)
Node* add1(Node* head) {
  int carry = helper(head);
  if (carry) {
    Node* new_node = new Node(1, head);
    return new_node;
  }
  return head;
}