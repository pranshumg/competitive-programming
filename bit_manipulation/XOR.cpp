#include <bits/stdc++.h>

using namespace std;

/* XOR of numbers in a given range */

// 1 to n
// TC - O(1), SC - O(1)
int XOR(int n) {
  if (n % 4 == 1) {
    return 1;
  } else if (n % 4 == 2) {
    return n + 1;
  } else if (n % 4 == 3) {
    return 0;
  } else {
    return n;
  }
}

// L to R
// TC - O(1), SC - O(1)
int XOR_L_to_R(int L, int R) {
  return (XOR(L - 1) ^ XOR(R));
}