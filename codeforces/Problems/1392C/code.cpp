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
    int i = 1;
    int64_t ans = 0;
    while (i < n) {
        if (v[i - 1] > v[i]) {
            int64_t val = v[i - 1];
            while (i < n && v[i] < v[i - 1]) {
                i++;
            }   
            ans += val - v[i - 1];
        }
        i++;
    }
    cout << ans << '\n';
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