#include <bits/stdc++.h>

using namespace std;

/* String palindrome */
// TC - O(n), SC - O(n)
bool palindrome(string s, int i, int n) {
  if (i >= n / 2) {
    return true;
  }
  if (s[i] != s[n - i - 1]) {
    return false;
  }
  return palindrome(s, i + 1, n);
}

int main() {
  string s;
  cin >> s;
  cout << boolalpha << palindrome(s, 0, (int)s.size());    
  return 0;
}
