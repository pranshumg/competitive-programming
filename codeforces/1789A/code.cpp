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
        int GCD = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int d = gcd(v[i], v[j]);
                GCD = min(GCD, d);                
            }
        }
        if (GCD > 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}