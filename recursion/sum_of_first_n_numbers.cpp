#include <bits/stdc++.h>

using namespace std;

/* Sum of first n numbers */
// TC - O(n), SC - O(n)
int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + sum(n - 1);
}