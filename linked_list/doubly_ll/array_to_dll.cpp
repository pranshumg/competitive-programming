#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node* prev;

  Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
  }

  Node(int val, Node* next, Node* prev) {
    data = val;
    this->next = next;
    this->prev = prev;
  }
};

// TC - O(n), SC - O(1)
Node* convert_arr_to_dll(vector<int>& v) {
  Node* head = new Node(v[0]);
  Node* prev = head;
  for (int i = 1; i < (int)v.size(); ++i) {
    Node* tmp = new Node(v[i], nullptr, prev);
    prev->next = tmp;
    prev = tmp;
  }
  return head; 
}