#include <bits/stdc++.h>

using namespace std;

void print16(int n) {
  char c = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << c;
    }
    c++;
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;
  print16(n);
  return 0;
}
