/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + (s[i] == 'W');
    }
    int ans = INT_MAX;
    for (int i = 0; i <= n - k; i++) {
        ans = min(ans, prefix[i + k] - prefix[i]);
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