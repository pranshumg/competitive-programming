/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = v[0], energy = 0;
    for (int i = 0; i < n - 1; i++) {
        if (energy + (v[i] - v[i + 1]) < 0) {
            ans += v[i + 1] - v[i] - energy;
            energy = 0;
        } else {
            energy += v[i] - v[i + 1];
        }
    }
    cout << ans;
    
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