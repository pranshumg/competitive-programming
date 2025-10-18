#include <bits/stdc++.h>

using namespace std;

/* Palindrome number */
// TC - O(log n)
void palindrome_number(int n) {
  int rev_n = 0, og_n = n;
  while (n > 0) {
    int d = n % 10;
    rev_n = rev_n * 10 + d;
    n /= 10;
  }
  cout << (og_n == rev_n ? "YES\n" : "NO\n");
}
