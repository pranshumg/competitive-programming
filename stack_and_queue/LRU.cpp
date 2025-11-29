#include <bits/stdc++.h>

using namespace std;

/* LRU Cache */

class lru_cache {
public:
  class node {
  public:
    int key;
    int val;
    node* prev;
    node* next;

    node(int key, int val) {
      this->key = key;
      this->val = val;
    }
  };

  node* head = new node(-1, -1);
  node* tail = new node(-1, -1);
  int cap;
  unordered_map<int, node*> mp;

  lru_cache(int capacity) {
    cap = capacity;
    head->next = tail;
    tail->prev = head;
  }

  void add_node(node* new_node) {
    node* temp = head->next;
    new_node->next = temp;
    new_node->prev = head;
    head->next = new_node;
    temp->prev = new_node;
  }

  void delete_node(node* del_node) {
    node* prev_node = del_node->prev;
    node* next_node = del_node->next;
    prev_node->next = next_node;
    next_node->prev = prev_node;
  }

  int get(int key) {
    if (mp.find(key) != mp.end()) {
      node* res_node = mp[key];
      int ans = res_node->val;
      mp.erase(key);
      delete_node(res_node);
      add_node(res_node);
      mp[key] = head->next;
      return ans;
    }
    return -1;
  }

  void put(int key, int value) {
    if (mp.find(key) != mp.end()) {
      node* curr = mp[key];
      mp.erase(key);
      delete_node(curr);
    }
    if (mp.size() == cap) {
      mp.erase(tail->prev->key);
      delete_node(tail->prev);
    }
    add_node(new node(key, value));
    mp[key] = head->next;
  }
};