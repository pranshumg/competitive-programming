#include <bits/stdc++.h>

using namespace std;

/* Length of a singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(n), SC - O(1)
int length(Node* head) {
  int cnt = 0;
  Node* tmp = head;
  while (tmp) {
    ++cnt;
    tmp = tmp-> next;
  }
  return cnt;
}