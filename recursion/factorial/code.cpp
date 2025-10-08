#include <bits/stdc++.h>

using namespace std;

/* Factorial */
// TC - O(n), SC - O(n)
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  cin >> n;
  cout << factorial(n) << '\n';    
  return 0;
}
