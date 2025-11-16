#include <bits/stdc++.h>

using namespace std;

/* Insert before kth element of a doubly linked list */

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

// TC - O(n), SC - O(1)
Node* insert_kth(Node* head, int val, int k) {
  if (k == 1) {
    Node* new_node = new Node(val, head, nullptr);
    if (head != nullptr) {
      head->prev = new_node;
    }
    return new_node;
  }
  int cnt = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    ++cnt;
    if (cnt == k) {
      break;
    }
    tmp = tmp->next;
  }
  Node* new_node = new Node(val, tmp, tmp->prev);
  tmp->prev->next = new_node;
  tmp->prev = new_node;
  return head;
}