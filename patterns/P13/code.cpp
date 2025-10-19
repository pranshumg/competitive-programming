#include <bits/stdc++.h>

using namespace std;

void print13(int n) {
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << num++ << " ";
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print13(n);
  return 0;
}
