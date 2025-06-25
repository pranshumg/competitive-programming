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
    vector<int> vec(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> vec[i];
    int ans = vec[1], pass = vec[1];
    for (int i = 3; i < 2 * n; i += 2) {
        pass = pass - vec[i - 1] + vec[i];
        if (pass > ans) ans = pass;
    }
    cout << ans;
    return 0;
}