#include <bits/stdc++.h>

using namespace std;

/* Delete Node of a doubly linked list */

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

// TC - O(1), SC - O(1)
void delete_node(Node* tmp) {
  Node* back = tmp->prev;
  Node* front = tmp->next;
  if (front == nullptr) {
    back->next = nullptr;
    tmp->prev = nullptr;
    delete tmp;
    return;
  }
  back->next = front;
  front->prev = back;
  tmp->prev = tmp->next = nullptr;
  delete tmp;
}