#include <bits/stdc++.h>

using namespace std;

/* Ceil division */

// TC - O(1), SC - O(1)
long long ceil_div(long long a, long long b) {
  return (a + b - 1) / b;
}