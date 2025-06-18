#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec, int low, int high) {
    int pivot = vec[low], i = low, j = high;
    while (i < j) {
        while (vec[i] <= pivot && i < high) i++;
        while (vec[j] >= pivot && j > low) j--;
        if (i < j) swap(vec[i], vec[j]);
    }
    swap(vec[low], vec[j]);
    return j;
}

void quick_sort(vector<int> &vec, int low, int high) {
    if (low < high) {
        int part_idx = partition(vec, low, high);
        quick_sort(vec, low, part_idx - 1);
        quick_sort(vec, part_idx + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    quick_sort(vec, 0, n - 1);
    for (auto it : vec) cout << it << " ";
    return 0;
}