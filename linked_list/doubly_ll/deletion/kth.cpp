#include <bits/stdc++.h>

using namespace std;

/* Delete kth element of a doubly linked list */

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
Node* delete_kth(Node* head, int k) {
  if (head == nullptr) {
    return nullptr;
  }
  int cnt = 0;
  Node* tmp = head;
  while (tmp != nullptr) {
    ++cnt;
    if (cnt == k) {
      break;
    }
    tmp = tmp->next;
  }
  Node* back = tmp->prev;
  Node* front = tmp->next;
  if (back == nullptr && front == nullptr) {
    delete tmp;
    return nullptr;
  }
  if (back == nullptr) {
    head = front;
    head->prev = nullptr;
    tmp->next = nullptr;
    delete tmp;
    return head;
  }
  if (front == nullptr) {
    back->next = nullptr;
    tmp->prev = nullptr;
    delete tmp;
    return head;
  }
  back->next = front;
  front->prev = back;
  tmp->next = nullptr;
  tmp->prev = nullptr;
  delete tmp;
  return head;
}