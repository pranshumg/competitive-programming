/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> v(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n] - v[n - 1] << '\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}