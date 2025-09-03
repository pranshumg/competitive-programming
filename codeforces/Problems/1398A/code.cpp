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
    if ((double)(v[0] + v[1] + v[n - 1]) / 2 <= v[n - 1]) {
        cout << 1 << ' ' << 2 << ' ' << n << '\n';
        return;
    }
    cout << -1 << '\n';
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