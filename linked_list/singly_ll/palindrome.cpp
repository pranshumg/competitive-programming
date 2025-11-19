#include <bits/stdc++.h>

using namespace std;

/* Check a singly linked list is a palindrome or not */

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// TC - O(n), SC - O(n)
bool palindrome(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return true;
  }
  stack<int> sk;
  Node* tmp = head;
  while (tmp != nullptr) {
    sk.push(tmp->data);
    tmp = tmp->next;
  }
  tmp = head;
  while (tmp != nullptr) {
    if (tmp->data != sk.top()) {
      return false;
    }
    sk.pop();
    tmp = tmp->next;
  }
  return true;
}

Node* reverse(Node* head) {
  Node* tmp = head;
  Node* back = nullptr;
  while (tmp != nullptr) {
    Node* front = tmp->next;
    tmp->next = back;
    back = tmp;
    tmp = front;
  }
  return back;
}

// TC - O(n), SC - O(1)
bool palindrome(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    return true;
  }
  Node* slow = head;
  Node* fast = head;
  while (fast->next != nullptr && fast->next->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  Node* new_head = reverse(slow->next);
  Node* first = head;
  Node* second = new_head;
  while (second != nullptr) {
    if (first->data != second->data) {
      reverse(new_head);
      return false;
    }
    first = first->next;
    second = second->next;
  }
  reverse(new_head);
  return true;
}