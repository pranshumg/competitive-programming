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

void run_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int GCD = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            GCD = min(GCD, gcd(v[i], v[j]));
            if (GCD <= 2) {
                break;
            }
        }
        if (GCD <= 2) {
            break;
        }
    }
    if (GCD <= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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