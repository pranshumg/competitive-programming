#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> &vec, int n, int k) {
    for (int i = 0; i < n; i++) if (vec[i] == k) return i;
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    cout << linear_search(vec, n, k);
    return 0;
}