#include <bits/stdc++.h>

using namespace std;

/* Print name n times */
// TC - O(n), SC - O(n)
void print_name_n_times(string s, int n) {
  if (n == 0) {
    return;
  }
  cout << s << '\n';
  print_name_n_times(s, n - 1);
}

int main() {
  string s;
  getline(cin, s);
  int n;
  cin >> n;
  print_name_n_times(s, n);    
  return 0;
}
