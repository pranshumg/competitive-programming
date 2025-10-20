#include <bits/stdc++.h>

using namespace std;

/* Remove the last set bit (rightmost) */

// TC - O(1), SC - O(1)
void remove(int &n) {
  n = n & (n - 1);
}