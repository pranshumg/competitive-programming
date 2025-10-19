#include <bits/stdc++.h>

using namespace std;

// TC - O(n log n)
// SC - O(n)
void merge(vector<int>& v, int low, int mid, int high) {
  vector<int> tmp;
  int left = low, right = mid + 1;
  while (left <= mid && right <= high) {
    if (v[left] <= v[right]) {
      tmp.push_back(v[left++]);
    } else {
      tmp.push_back(v[right++]);
    }
  }
  while (left <= mid) {
    tmp.push_back(v[left++]);
  }
  while (right <= high) {
    tmp.push_back(v[right++]);
  }
  for (int i = low; i <= high; i++) {
    v[i] = tmp[i - low];
  }
}

void merge_sort(vector<int>& v, int low, int high) {
  if (low >= high) {
    return;
  }
  int mid = (low + high) / 2;
  merge_sort(v, low, mid);
  merge_sort(v, mid + 1, high);
  merge(v, low, mid, high);
} 

