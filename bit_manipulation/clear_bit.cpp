#include <bits/stdc++.h>

using namespace std;

/* Clear the ith bit */

void clear_bit(int &n, int i) {
  n = n & ~(1 << i);
}