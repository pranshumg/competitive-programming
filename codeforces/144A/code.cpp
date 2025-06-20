/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int largest_idx(vector<int> &vec, int n) {
    int largest = vec[0], idx = 0;
    for (int i = 0; i < n; i++) {
        if (largest < vec[i]) {
            largest = vec[i];
            idx = i;
        }
    }
    return idx;
}

int smallest_idx(vector<int> &vec, int n) {
    int smallest = vec[0], idx = 0;
    for (int i = 0; i < n; i++) {
        if (smallest >= vec[i]) {
            smallest = vec[i];
            idx = i;
        }
    }
    return idx;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int largest = largest_idx(vec, n);
    int smallest = smallest_idx(vec, n);

    if (largest < smallest) cout << (n - 1 - smallest) + (largest);
    else cout << ((n - 1 - smallest) + (largest) - 1);

    return 0;
}