#include <bits/stdc++.h>

using namespace std;

/* Intersection of Y singly linked list */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(n log n), SC - O(n)
Node* intersection(Node* head1, Node* head2) {
  Node* tmp = head1;
  map<Node*, int> mp;
  while (tmp != nullptr) {
    ++mp[tmp];
    tmp = tmp->next;
  }
  tmp = head2;
  while (tmp != nullptr) {
    if (mp.find(tmp) != mp.end()) {
      return tmp;
    }
    tmp = tmp->next;
  }
  return nullptr;
}

Node* collision_point(Node* head1, Node* head2, int d) {
  Node* tmp1 = head1;
  while (d) {
    --d;
    tmp1 = tmp1->next;
  }
  Node* tmp2 = head2;
  while (tmp1 != tmp2) {
    tmp1 = tmp1->next;
    tmp2 = tmp2->next;
  }
  return tmp1;
}

// TC - O(n), SC - O(1)
Node* intersection(Node* head1, Node* head2) {
  int n1 = 0, n2 = 0;
  Node* tmp = head1;
  while (tmp != nullptr) {
    ++n1;
    tmp = tmp->next;
  }
  tmp = head2;
  while (tmp != nullptr) {
    ++n2;
    tmp = tmp->next;
  }
  if (n1 > n2) {
    return collision_point(head1, head2, n1 - n2);
  } 
  return collision_point(head2, head1, n2 - n1);
}

// TC - O(n), SC - O(1)
Node* intersection(Node* head1, Node* head2) {
  if (head1 == nullptr || head2 == nullptr) {
    return nullptr; 
  }
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  while (tmp1 != tmp2) {
    tmp1 = tmp1->next;
    tmp2 = tmp2->next;
    if (tmp1 == tmp2) {
      return tmp1;
    }
    if (tmp1 == nullptr) {
      tmp1 = head2;
    }
    if (tmp2 == nullptr) {
      tmp2 = head1;
    }
  }
  return tmp1;
}