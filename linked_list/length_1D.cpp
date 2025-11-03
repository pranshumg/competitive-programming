#include <bits/stdc++.h>

using namespace std;

/* Length of a singly linked list */

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

int main() {
  vector<int> v = {1, 3, 5, 7, 9};
  Node* head = convert_v_to_ll(v);
  cout << length(head) << '\n';
}