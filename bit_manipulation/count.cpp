#include <bits/stdc++.h>

using namespace std;

/* Count no. of set bits */

// TC - O(log n), SC - O(1)
int count(int n) {
  int cnt = 0;
  while (n > 0) {
    if (n % 2 == 1) {
      ++cnt;
    }
    n /= 2;
  }
  return cnt;
}

// TC - O(log n), SC - O(1)
int count(int n) {
  int cnt = 0;
  while (n > 0) {
    cnt += n & 1;
    n >>= 1;
  }
  return cnt;
}

// Optimal
// TC - O(no. of set bits), SC - O(1)
int count(int n) {
  int cnt = 0;
  while (n > 0) {
    n &= (n - 1);
    ++cnt;
  }
  return cnt;
}