#include <bits/stdc++.h>

using namespace std;

/* Sort a singly linked list */

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
Node* sort_ll(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  vector<int> v;
  Node* tmp = head;
  while (tmp != nullptr) {
    v.emplace_back(tmp->data);
    tmp = tmp->next;
  }
  sort(v.begin(), v.end());
  tmp = head;
  int idx = 0;
  while (tmp != nullptr) {
    tmp->data = v[idx++];
    tmp = tmp->next;
  }
  return head;
}

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

Node* find_middle(Node* head) {
  Node* slow = head;
  Node* fast = head->next;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

// TC - O(n log n), SC - O(log n)
Node* sort_ll(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node* middle = find_middle(head);
  Node* left = head;
  Node* right = middle->next;
  middle->next = nullptr;
  left = sort_ll(left);
  right = sort_ll(right);
  return merge(left, right);
}