/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[n - 2] + v[0] <= v[n - 1] && v[n - 3] + v[n - 2] <= v[n - 1]) {
        cout << "NO";
        return;
    }
    if (v[n - 2] + v[0] <= v[n - 1]) {
        swap(v[n - 1], v[n - 2]);
    }
    cout << "YES\n";
    for (auto it: v) {
        cout << it << ' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}