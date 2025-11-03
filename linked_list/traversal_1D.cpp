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

Node* convert_v_to_ll(vector<int>& v) {
  Node* head = new Node(v[0]);
  Node* mover = head;
  for (int i = 1; i < (int)v.size(); ++i) {
    Node* tmp = new Node(v[i]);
    mover->next = tmp;
    mover = tmp;
  } 
  return head;
}

void traversal(Node* head) {
  Node* tmp = head;
  while (tmp) {
    cout << tmp->data << ' ';
    tmp = tmp->next;
  }
}

int main() {
  vector<int> v = {1, 3, 5, 7, 9};
  Node* head = convert_v_to_ll(v);
  traversal(head);
}