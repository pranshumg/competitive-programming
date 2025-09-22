/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int left = 0, right = 0, sum = 0, ans = 0;
    while (right < n) {
        sum += v[right];
        if (sum > t) {
            sum -= v[left++];
        }
        ans = max(ans, right++ - left + 1);
    }
    cout << ans << '\n';
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