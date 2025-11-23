#include <bits/stdc++.h>

using namespace std;

/* Delete all occurrences of a key in a doubly linked list */

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
Node* delete_all(Node* head, int key) {
  Node* tmp = head;
  while (tmp != nullptr) {
    if (tmp->data == key) {
      if (tmp == head) {
        head = tmp->next;
      }
      Node* front = tmp->next;
      Node* back = tmp->prev;
      if (front) {
        front->prev = back;
      }
      if (back) {
        back->next = front;
      }
      delete tmp;
      tmp = front;
    } else {
      tmp = tmp->next;
    }
  }
  return head;
}