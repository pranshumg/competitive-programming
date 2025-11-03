#include <bits/stdc++.h>

using namespace std;

/* Convert array to linked list */

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