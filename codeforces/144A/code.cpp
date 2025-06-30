/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

vector<int> largest_smallest(vector<int> &vec, int n) {
    int largest_idx = 0, largest_ele = vec[0];
    int smallest_idx = 0, smallest_ele = vec[0];
    for (int i = 0; i < n; i++) {
        if (largest_ele < vec[i]) {
            largest_ele = vec[i];
            largest_idx = i;
        }
        if (smallest_ele >= vec[i]) {
            smallest_ele = vec[i];
            smallest_idx = i;
        }
    }
    return {largest_idx, smallest_idx};
}

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> idx = largest_smallest(vec, n);
    if (idx[0] < idx[1]) cout << (n - 1 - idx[1]) + (idx[0]);
    else cout << ((n - 1 - idx[1]) + (idx[0]) - 1);
    return 0;
}