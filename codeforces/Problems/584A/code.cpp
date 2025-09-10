#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, t;
    cin >> n >> t;
    if (n == 1 && t > 9) {
        cout << -1;
        return;
    }
    cout << t;
    for (int i = 0; i < n - 2; i++) {
        cout << 0;
    }
    if (t < 10 && n > 1) {
        cout << 0;
    } 
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