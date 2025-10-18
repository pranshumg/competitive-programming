#include <bits/stdc++.h>

using namespace std;

void print15(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int j = 0; j < n - i; j++) {
      cout << c++;
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print15(n);
  return 0;
}
