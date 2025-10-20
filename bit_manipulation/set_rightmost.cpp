#include <bits/stdc++.h>

using namespace std;

/* Set the rightmost unset bit */

// TC - O(1), SC - O(1)
void set(int &n) {
  n = n | (n + 1);
}