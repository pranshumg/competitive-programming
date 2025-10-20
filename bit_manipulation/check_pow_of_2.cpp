#include <bits/stdc++.h>

using namespace std;

/* Check power of 2 */

// TC - O(1), SC - O(1)
bool check(int n) {
  return !(n & (n - 1));
}