#include <bits/stdc++.h>

using namespace std;

/* Minimum bit flips to convert number */

// TC - O(no. of set bits), SC - O(1)
int count(int n) {
  int cnt = 0;
  while (n) {
   n &= (n - 1);
   ++cnt; 
  }
  return cnt;
}

int bit_flips(int a, int b) {
  return count(a ^ b);
}
