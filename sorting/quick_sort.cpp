#include <bits/stdc++.h>

using namespace std;

/* Quick sort */

// TC - O(n log n), SC - O(log n)
int partition(vector<int>& v, int l, int h) {
    int pivot = v[l], i = l, j = h;
    while (i < j) {
        while (v[i] <= pivot && i <= h) {
            ++i;
        }
        while (v[j] > pivot && j >= l) {
            --j;
        }
        if (i < j) {
            swap(v[i], v[j]);
        }
    }
    swap(v[l], v[j]);
    return j;
}

void quick_sort(vector<int>& v, int l, int h) {
    if (l >= h) {
        return;
    }
    int pivot_idx = partition(v, l, h);
    quick_sort(v, l, pivot_idx - 1);
    quick_sort(v, pivot_idx + 1, h);
}