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
        if (i > 0) {
            if (v[i] > v[i - 1]) {
                v[i] -= v[i - 1], v[i - 1] = 0;
            } else {
                v[i - 1] -= v[i], v[i] = 0;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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