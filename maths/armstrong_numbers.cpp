#include <bits/stdc++.h>

using namespace std;

/* Armstrong numbers */
// TC - O(log n)
void armstrong_numbers(int n) {
  int cnt = (int)(log10(n) + 1), sum = 0, og_n = n;
  while (n > 0) {
    int d = n % 10;
    sum += pow(d, cnt);
    n /= 10;
  }
  cout << (sum == og_n ? "YES\n" : "NO\n");
}
