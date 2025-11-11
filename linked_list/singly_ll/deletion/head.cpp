#include <bits/stdc++.h>

using namespace std;

/* Delete head in a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(1), SC - O(1)
Node* delete_head(Node* head) {
  if (head == NULL) {
    return NULL;
  }
  Node* tmp = head;
  head = head->next;
  delete tmp;
  return head;
}