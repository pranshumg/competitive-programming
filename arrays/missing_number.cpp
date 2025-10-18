#include <bits/stdc++.h>

using namespace std;

/* Missing Number */
// Brute (TC - O(n²), SC - O(1))
int missing_number(vector<int>& v, int n) {
  for (int i = 1; i <= n + 1; i++) {
    bool flag = false;
    for (int j = 0; j < n; j++) {
      if (i == v[j]) {
        flag = true;
        break;
      }
    }
    if (!flag) {
      return i;
    }
  }
} 

// Better (TC - O(n), SC - O(n))
int missing_number(vector<int>& v, int n) {
  vector<int> hash(n + 1, 0);
  for (int i = 0; i < n; i++) {
    hash[v[i]]++;
  }
  for (int i = 1; i <= n + 1; i++) {
    if (hash[i] == 0) {
      return i;
    }
  }
}

// Optimal (TC - O(n), SC - O(1))
int missing_number(vector<int>& v, int n) {
  int sum1 = ((n + 1) * (n + 2)) / 2, sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum2 += v[i];
  }
  return sum1 - sum2;
}

// Optimal (TC - O(n), SC - O(1))
int missing_number(vector<int>& v, int n) {
  int xor1 = 0, xor2 = 0;
  for (int i = 0; i < n; i++) {
    xor1 ^= (i + 1);
    xor2 ^= v[i];
  }
  xor1 ^= (n + 1);
  return xor1 ^ xor2;
}
