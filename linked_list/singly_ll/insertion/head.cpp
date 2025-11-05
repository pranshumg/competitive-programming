#include <bits/stdc++.h>

using namespace std;

/* inserting at head of a singly linked list */

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

// TC - O(1), SC - O(1)
Node* insert_head(Node* head, int val) {
  return new Node(val, head);
}