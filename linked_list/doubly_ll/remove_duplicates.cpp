#include <bits/stdc++.h>

using namespace std;

/* Remove duplicates in a doubly linked list */

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
Node* remove(Node* head) {
  Node* tmp = head;
  while (tmp != nullptr && tmp->next != nullptr) {
    Node* front = tmp->next;
    while (front != nullptr && front->data == tmp->data) {
      Node* duplicate = front;
      front = front->next;
      delete duplicate;
    }
    tmp->next = front;
    if (front) {
      front->prev = tmp;
    }
    tmp = tmp->next;
  }
  return head;
}