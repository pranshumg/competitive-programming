#include <bits/stdc++.h>

using namespace std;

/* Insert after tail of a doubly linked list */

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

Node* insert_tail(Node* head, int val) {
  if (head == nullptr) {
    Node* new_node = new Node(val);
    return new_node;
  }
  Node* tmp = head;
  while (tmp->next != nullptr) {
    tmp = tmp->next;
  }
  Node* new_node = new Node(val, nullptr, tmp);
  tmp->next = new_node; 
  return head;
}