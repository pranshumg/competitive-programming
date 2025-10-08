#include <bits/stdc++.h>

using namespace std;

// Best TC - O(n)
// Worst TC - O(n²)
void bubble_sort(vector<int>& v, int n) {
  for (int i = 0; i < n; i++) {
    int did_swap = 0;
    for (int j = 0; j < n - 1 - i; j++) {
      if (v[j] > v[j + 1]) {
        swap(v[j], v[j + 1]);
        did_swap = 1;
      }
    }
    if (!did_swap) {
      break;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }    
  bubble_sort(v, n);
  for (auto it: v) {
    cout << it << ' ';
  }
  cout << '\n';
  return 0;
}
