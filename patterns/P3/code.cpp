#include <bits/stdc++.h>

using namespace std;

void print3(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print3(n);
  return 0;
}
