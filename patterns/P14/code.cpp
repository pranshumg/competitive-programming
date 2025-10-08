#include <bits/stdc++.h>

using namespace std;

void print14(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int j = 0; j <= i; j++) {
      cout << c++;
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print14(n);
  return 0;
}
