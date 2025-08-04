/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    if (a == 0) {
        return b;
    } else {
        return a;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = v[0] - 1;
        for (int i = 1; i < n; i++) {
            ans = gcd(ans, abs(v[i] - (i + 1)));
        }
        cout << ans << '\n';
    }
    return 0;
}