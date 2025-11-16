#include <bits/stdc++.h>

using namespace std;

/* Convert array to doubly linked list */

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