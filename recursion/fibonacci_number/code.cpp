#include <bits/stdc++.h>

using namespace std;

/* Fibonacci numbers */
// TC - O(2^n), SC - O(n)
int fib(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

