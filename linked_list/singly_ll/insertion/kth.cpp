#include <bits/stdc++.h>

using namespace std;

/* inserting at kth postion of a singly linked list */

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
Node* insert_kth(Node* head, int el, int k) {
  if (head == nullptr) {
    if (k == 1) {
      return new Node(el);
    } else {
      return nullptr;
    }
  }
  if (k == 1) {
    return new Node(el, head);
  }
  Node* tmp = head;
  int cnt = 0;
  while (tmp != nullptr) {
    ++cnt;
    if (cnt == k - 1) {
      Node* new_node = new Node(el, tmp->next);
      tmp->next = new_node;
      break;
    }
    tmp = tmp->next;
  }
  return head;
}