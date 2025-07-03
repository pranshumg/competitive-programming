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
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> v[i];
    int ans = v[1], pass = v[1];
    for (int i = 3; i < 2 * n; i += 2) {
        pass = pass - v[i - 1] + v[i];
        if (pass > ans) ans = pass;
    }
    cout << ans;
    return 0;
}