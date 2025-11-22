#include <bits/stdc++.h>

using namespace std;

/* Merge two sorted  singly linked lists */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

Node* convert_arr_to_ll(vector<int>& v) {
  Node* head = new Node(v[0]);
  Node* mover = head;
  for (int i = 1; i < (int)v.size(); ++i) {
    Node* tmp = new Node(v[i]);
    mover->next = tmp;
    mover = tmp;
  } 
  return head;
}

// TC - O(n log n), SC - O(n)
Node* merge(Node* head1, Node* head2) {
  vector<int> v;
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  while (tmp1 != nullptr) {
    v.emplace_back(tmp1->data);
    tmp1 = tmp1->next;
  }
  while (tmp2 != nullptr) {
    v.emplace_back(tmp2->data);
    tmp2 = tmp2->next;
  }
  sort(v.begin(), v.end());
  Node* head = convert_arr_to_ll(v);
  return head;
}

// TC - O(n), SC - O(1)
Node* merge(Node* head1, Node* head2) {
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  Node* dummy = new Node(-1);
  Node* tmp = dummy;
  while (tmp1 != nullptr && tmp2 != nullptr) {
    if (tmp1->data < tmp2->data) {
      tmp->next = tmp1;
      tmp = tmp1;
      tmp1 = tmp1->next;
    } else {
      tmp->next = tmp2;
      tmp = tmp2;
      tmp2 = tmp2->next;
    }
  }
  if (tmp1) {
    tmp->next = tmp1;
  } else {
    tmp->next = tmp2;
  }
  return dummy->next;
}