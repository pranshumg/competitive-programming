#include <bits/stdc++.h>

using namespace std;

/* Min stack */

// TC - O(1), SC - O(n)
class min_stack {
public:
  stack<pair<int, int>> sk;

  void push(int val) {
    if (sk.empty()) {
      sk.push({val, val});
    } else {
      sk.push({val, min(sk.top().second, val)});
    }
  }

  void pop() {
    sk.pop();
  }

  int top() {
    return sk.top().first;
  }

  int get_min() {
    return sk.top().second;
  }
};

// TC - O(1), SC - O(1)
class min_stack {
public:
  stack<long long> sk;
  long long mini = INT_MAX;
  
  void push(int val) {
    if (sk.empty()) {
      mini = val;
      sk.push(val);
    } else if (val >= mini) {
      sk.push(val);
    } else {
      sk.push((long long)2 * val - mini);
      mini = val;
    }
  }
  
  void pop() {
    if (sk.empty()) {
      return;
    }
    long long x = sk.top();
    sk.pop();
    if (x < mini) {
      mini = (long long)2 * mini - x;
    }
  }
  
  int top() {
    if (sk.empty()) {
      return -1;
    }
    long long x = sk.top();
    if (x < mini) {
      return mini;
    } 
    return x;
  }
  
  int get_min() {
    return mini;
  }
};