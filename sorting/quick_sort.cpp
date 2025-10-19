#include <bits/stdc++.h>

using namespace std;

// TC - O(n log n)
// SC - O(log n)
int partition(vector<int>& v, int low, int high) {
  int pivot = v[low], i = low, j = high;
  while (i < j) {
    while (v[i] <= pivot && i <= high) {
      i++;
    }
    while (v[j] > pivot && j >= low) {
      j--;
    }
    if (i < j) {
      swap(v[i], v[j]);
    }
  }
  swap(v[low], v[j]);
  return j;
}

void quick_sort(vector<int>& v, int low, int high) {
  if (low >= high) {
    return ;
  }
  int pivot_idx = partition(v, low, high);
  quick_sort(v, low, pivot_idx - 1);
  quick_sort(v, pivot_idx + 1, high);
}

