/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n - 1; i += 2) {
        if (v[i] != v[i + 1]) {
            ans += (v[i + 1] - v[i]);
        }
    }
    cout << ans;
    return 0;
}