#include <bits/stdc++.h>

using namespace std;

void print9(int n) {
  // Upper pyramid
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    for (int j = 0; j < n - i; j++) {
      cout << " ";
    }
    cout << '\n';
  }
  // Lower inverted pyramid
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
      cout << "*";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print9(n);
  return 0;
}
