#include <bits/stdc++.h>

using namespace std;

// TC - O(n log n)
// SC - O(n)
void merge(vector<int>& v, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left++]);
        } else {
            temp.push_back(v[right++]);
        }
    }
    while (left <= mid) {
        temp.push_back(v[left++]);
    }
    while (right <= high) {
        temp.push_back(v[right++]);
    }
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
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

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    merge_sort(v, 0, n - 1);
    for (auto it: v) {
        cout << it << ' ';
    }
    cout << '\n';
    return 0;
}