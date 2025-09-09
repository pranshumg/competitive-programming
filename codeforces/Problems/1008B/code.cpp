/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int lh;
    for (int i = 0; i < n; i++) {
        int w, h;
        cin >> w >> h;
        if (i > 0) {
            if (w > lh && h > lh) {
                cout << "NO\n";
                return;
            }
            if (h > lh) {
                lh = w;
            } else if (w > lh) {
                lh = h;
            } else {
                lh = max(w, h);
            }
        } else {
            lh = max(w, h);
        }
    }
    cout << "YES\n";
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