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
    auto it = find(v.begin(), v.end(), 1);
    int idx = it - v.begin(), zero = 0, ans = 0;
    while (idx < n) {
        if (v[idx] == 1) {
            if (zero == 1) {
                ans += 2;
            } else {
                ans++;
            }
            zero = 0;
        } else {
            zero++;
        }
        idx++; 
    }
    cout << ans;
    return 0;
}