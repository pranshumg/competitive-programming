#include <bits/stdc++.h>

using namespace std;

/* Check if the ith bit is set or not */

// using left shift operator
bool check(int n, int i) {
  if (n & (1 << i)) {
    return true;
  }
  return false;
}

// using right shift operator
bool check(int n, int i) {
  if ((n >> i) & 1) {
    return true;
  }
  return false;
}