/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

vector<int> largest_smallest(vector<int>& v, int n) {
    int largest_idx = 0, largest_ele = v[0];
    int smallest_idx = 0, smallest_ele = v[0];
    for (int i = 0; i < n; i++) {
        if (largest_ele < v[i]) {
            largest_ele = v[i];
            largest_idx = i;
        }
        if (smallest_ele >= v[i]) {
            smallest_ele = v[i];
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> idx = largest_smallest(v, n);
    if (idx[0] < idx[1]) cout << (n - 1 - idx[1]) + (idx[0]);
    else cout << ((n - 1 - idx[1]) + (idx[0]) - 1);
    return 0;
}