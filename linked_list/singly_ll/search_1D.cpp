#include <bits/stdc++.h>

using namespace std;

/* Search element in a singly linked list */

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
int search(Node* head, int val) {
  Node* tmp = head;
  while (tmp) {
    if (tmp->data == val) {
      return 1;
    }
    tmp = tmp->next;
  }
  return 0;
}