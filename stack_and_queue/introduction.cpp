#include <bits/stdc++.h>

using namespace std;

/* Introduction to stack and queue */

// Stack using array
class stack_arr {
public:
  int sk[10];
  int top;

  stack_arr() {
    top = -1;
  } 

  void push(int val) {
    if (top >= 10) {
      cout << "stack overflow\n";
      return;
    }
    sk[++top] = val;
  }

  int top() {
    if (top == -1) {
      return -1;
    }
    return sk[top];
  }

  int pop() {
    if (top == -1) {
      return -1;
    }
    int el = sk[top];
    --top;
    return el;
  }

  int size() {
    return top + 1;
  }
};

// Queue using array
class queue_arr {
public:
  static constexpr int size = 10;
  int qe[size];
  int front, rear;
  int cur_size;

  queue_arr() {
    front = rear = -1;
    cur_size = 0;
  }

  void push(int val) {
    if (cur_size == 10) {
      cout << "queue overflow\n";
      return;
    }
    if (cur_size == 0) {
      front = rear = 0;
    }
    rear = (rear + 1) % size;
    qe[rear] = val;
    ++cur_size;
  }

  int pop() {
    if (cur_size == 0) {
      return -1;
    }
    int el = qe[front];
    if (cur_size == 1) {
      front = rear = -1;
    } else {
      front = (front + 1) % size;
    }
    --cur_size;
    return el;
  }

  int top() {
    if (cur_size == 0) {
      return -1;
    }
    return qe[front];
  }

  int size() {
    return cur_size;
  }
};

// Stack using linked list
class stack_ll {
public:
  class Node {
  public:
    int val;
    Node* next;

    Node(int val, Node* next) {
      this->val = val;
      this->next = next;
    }
  };
  int size;
  Node* top;

  stack_ll() {
    size = 0;
    Node* top = nullptr;
  }

  void push(int val) {
    Node* node = new Node(val, top);
    top = node;
    ++size;
  }

  void pop() {
    if (top == nullptr) {
      cout << "stack underflow\n";
      return;
    }
    Node* tmp = top;
    top = top->next;
    delete tmp;
    --size;
  }

  int top() {
    if (top == nullptr) {
      return -1;
    }
    return top->val;
  }

  int size() {
    return size;
  }
};

// Queue using linked list
class queue_ll {
public:
  class Node {
  public:
    int val;
    Node* next;

    Node(int val, Node* next) {
      this->val = val;
      this->next = next;
    }
  };
  int size;
  Node* front;
  Node* rear;

  queue_ll() {
    size = 0;
    front = nullptr;
    rear = nullptr;
  }

  void push(int val) {
    Node* node = new Node(val, rear);
    if (front == nullptr) {
      front = rear = node;
    } else {
      rear->next = node;
      rear = node;
    }
    ++size;
  }

  void pop() {
    if (front == nullptr) {
      cout << "queue underflow\n";
      return;
    }
    Node* tmp = front;
    front = front->next;
    delete tmp;
    --size;
  }

  int top() {
    if (front == nullptr) {
      return -1;
    }
    return front->val;
  }

  int size() {
    return size;
  }
};

// Stack using queue
class stack_qe {
public:
  queue<int> qe;

  void push(int val) {
    int n = (int)qe.size();
    qe.emplace(val);
    for (int i = 0; i < n; ++i) {
      qe.emplace(qe.front());
      qe.pop();
    }
  }

  int pop() {
    int el = qe.front();
    qe.pop();
    return el;
  }

  int top() {
    return qe.front();
  }

  bool empty() {
    return qe.empty();
  }
};

// Queue using stack
class queue_sk {
public:
  stack<int> sk1, sk2;

  void push(int val) {
    while ((int)sk1.size()) {
      sk2.emplace(sk1.top());
      sk1.pop();
    }
    sk1.emplace(val);
    while ((int)sk2.size()) {
      sk1.emplace(sk2.top());
      sk2.pop();
    }
  }

  int pop() {
    int el = sk1.top();
    sk1.pop();
    return el;
  }

  int peek() {
    return sk1.top();
  }

  bool empty() {
    return sk1.empty();
  }
};

// Approach 2 for queue using stack
class queue_sk {
public:
  stack<int> sk1, sk2;

  void push(int val) {
    sk1.emplace(val);
  }

  int pop() {
    if (!sk2.empty()) {
      sk2.pop();
    }
    while ((int)sk1.size()) {
      sk2.emplace(sk1.top());
      sk1.pop();
    }
    int el = sk2.top();
    sk2.pop();
    return el;
  }

  int peek() {
    if (!sk2.empty()) {
      return sk2.top();
    }
    while ((int)sk1.size()) {
      sk2.emplace(sk1.top());
      sk1.pop();
    }
    return sk2.top();
  }

  bool empty() {
    return sk1.size();
  }
};