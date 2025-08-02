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
    unordered_map<int, int> mp;
    int64_t ans = 0;
    for (int i = 0; i < n; i++) {
        if (mp.count(i - v[i])) {
            ans += mp[i - v[i]];
        }
        mp[v[i] + i]++;
    }
    cout << ans << '\n';
    return 0;
}