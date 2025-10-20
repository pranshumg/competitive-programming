#include <bits/stdc++.h>

using namespace std;

/* set the ith bit */

// TC - O(1), SC - O(1)
void set_bit(int &n, int i) {
  n = n | (1 << i);
}
