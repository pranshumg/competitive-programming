#include <bits/stdc++.h>

using namespace std;

/* Factorial */
// TC - O(n), SC - O(n)
int factorial(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return n * factorial(n - 1);
}