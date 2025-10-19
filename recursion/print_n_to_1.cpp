#include <bits/stdc++.h>

using namespace std;

/* Print n to 1 */
// TC - O(n), SC - O(n)
void print_n_to_1(int n) {
  if (n == 0) {
    return;
  }
  cout << n << ' ';
  print_n_to_1(n - 1);
}


