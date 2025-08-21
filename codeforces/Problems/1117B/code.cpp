/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n, m, k;
    cin >> n >> m >> k;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << (v[n - 1] * (k * (m / (k + 1))) + (v[n - 2] * (m / (k + 1))) + (v[n - 1] * (m % (k + 1))));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}