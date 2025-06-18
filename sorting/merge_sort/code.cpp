#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (vec[left] <= vec[right]) temp.emplace_back(vec[left++]);
        else temp.emplace_back(vec[right++]);
    }
    while (left <= mid) temp.emplace_back(vec[left++]);
    while (right <= high) temp.emplace_back(vec[right++]);

    for (int i = low; i <= high; i++) vec[i] = temp[i - low]; 
}

void merge_sort(vector<int> &vec, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid + 1, high);
    merge(vec, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    merge_sort(vec, 0,  n - 1);
    for (auto it : vec) cout << it << " ";
    return 0;
}