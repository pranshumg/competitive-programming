#include <bits/stdc++.h>

using namespace std;

/* Traversal of a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

// TC - O(n), SC - O(1)
void traverse(Node* head) {
  Node* tmp = head;
  while (tmp) {
    cout << tmp->data << ' ';
    tmp = tmp->next;
  }
}