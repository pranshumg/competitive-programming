#include <bits/stdc++.h>

using namespace std;

// Best TC - O(n)
// Worst TC - O(n²)
void insertion_sort_rec(vector<int>& v, int i, int n) {
  if (i == n) {
    return;
  }
  int j = i;
  while (j > 0 && v[j - 1] > v[j]) {
    swap(v[j - 1], v[j--]);
  }
  insertion_sort_rec(v, i + 1, n);
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }    
  insertion_sort_rec(v, 1, n);
  for (auto it: v) {
    cout << it << ' ';
  }
  cout << '\n';
  return 0;
}
