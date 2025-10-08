#include <bits/stdc++.h>

using namespace std;

/* Count digits */
// Method 1 
// TC - O(log n)
int count_digits(int n) {
  int cnt = 0;
  while (n > 0) {
    cnt++, n /= 10;
  }
  return cnt;
}

// Method 2
// TC - O(1)
int count_digits(int n) {
  return (int)(log10(n) + 1);
}
