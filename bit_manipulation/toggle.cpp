#include <bits/stdc++.h>

using namespace std;

/* Toggle the ith bit */

// TC - O(1), SC - O(1)
void toggle(int &n, int i) {
  n = n ^ (1 << i);
}