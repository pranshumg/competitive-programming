#include <bits/stdc++.h>

using namespace std;

/* Add 2 numbers in a singly linked list */

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

// TC - O(n), SC - O(1)
Node* add2(Node* head1, Node* head2) {
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  Node* dummy = new Node(-1);
  Node* curr = dummy;
  int carry = 0;
  while (tmp1 != nullptr || tmp2 != nullptr) {
    int sum = carry;
    if (tmp1) {
      sum += tmp1->data;
    }
    if (tmp2) {
      sum += tmp2->data;
    }
    Node* new_node = new Node(sum % 10);
    carry = sum / 10;
    curr->next = new_node;
    curr = new_node;
    if (tmp1) {
      tmp1 = tmp1->next;
    }
    if (tmp2) {
      tmp2 = tmp2->next;
    }
  }
  if (carry) {
    Node* new_node = new Node(1);
    curr->next = new_node;
  }
  return dummy->next;
}