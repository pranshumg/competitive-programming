#include <bits/stdc++.h>

using namespace std;

void print20(int n) {
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
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      cout << "*";
    }
    for (int j = 0; j <= i; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << " ";
    }
    for (int j = 0; j < n - 1 - i; j++) {
      cout << "*";
    }
    cout << '\n';
  }    
}

int main() {
  int n;
  cin >> n;
  print20(n);
  return 0;
}