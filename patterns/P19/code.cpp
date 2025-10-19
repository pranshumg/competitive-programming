#include <bits/stdc++.h>

using namespace std;

void print19(int n) {
  // Upper half
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    cout << '\n';
  }
  // Lower half
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print19(n);
  return 0;
}
