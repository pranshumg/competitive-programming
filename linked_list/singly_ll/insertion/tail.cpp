#include <bits/stdc++.h>

using namespace std;

/* inserting at tail of a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = nullptr;
  }

  Node(int val, Node* ptr) {
    data = val;
    next = ptr;
  }
};

// TC - O(n), SC - O(1)
Node* insert_tail(Node* head, int val) {
  if (head == nullptr) {
    return new Node(val);
  }
  Node* tmp = head;
  while (tmp->next != nullptr) {
    tmp = tmp->next;
  }
  Node* new_node = new Node(val);
  tmp->next = new_node;
  return head;
}