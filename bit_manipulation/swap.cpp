#include <bits/stdc++.h>

using namespace std;

/* Swap two numbers */

// TC - O(1), SC - O(1)
void swap(int &a, int &b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}