#include <bits/stdc++.h>

using namespace std;

/* Pairs with given sum in a doubly linked list */

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

// TC - O(n * n), SC - O(1)
vector<pair<int, int>> pairs(Node* head, int sum) {
  vector<pair<int, int>> ans;
  if (head == nullptr) {
    return ans;
  }
  Node* tmp1 = head;
  while (tmp1 != nullptr) {
    Node* tmp2 = tmp1->next;
    while (tmp2 != nullptr && tmp1->data + tmp2->data <= sum) {
      if (tmp1->data + tmp2->data == sum) {
        ans.emplace_back(tmp1->data, tmp2->data);
      }
      tmp2 = tmp2->next;
    }
    tmp1 = tmp1->next;
  }
  return ans;
}

Node* find_tail(Node* head) {
  Node* tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }
  return tail;
}

// TC - O(n), SC - O(1) 
vector<pair<int, int>> pairs(Node* head, int sum) {
  vector<pair<int, int>> ans;
  if (head == nullptr) {
    return ans;
  }
  Node* left = head;
  Node* right = find_tail(head);
  while (left->data < right->data) {
    if (left->data + right->data == sum) {
      ans.emplace_back(left->data, right->data);
      left = left->next;
      right = right->prev;
    } else if (left->data + right->data > sum) {
      right = right->prev;
    } else {
      left = left->next;
    }
  }
  return ans;
}