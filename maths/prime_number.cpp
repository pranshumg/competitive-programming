#include <bits/stdc++.h>

using namespace std;

/* Prime number */
// Method 1
// TC - O(n)
void prime_number(int n) {
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cnt++;
    }
  }
  cout << (cnt == 2 ? "YES\n" : "NO\n");
}

// Method 2
// TC - O(√n)
void prime_number(int n) {
  int cnt = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      cnt++;
      if (n / i != i) {
        cnt++;
      }
    }
  }
  cout << (cnt == 2 ? "YES\n" : "NO\n");
}
