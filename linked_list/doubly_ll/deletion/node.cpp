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

