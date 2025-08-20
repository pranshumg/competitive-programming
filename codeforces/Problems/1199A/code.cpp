/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = n;
    bool flag;
    for (int i = 0; i < n; i++) {
        flag = true;
        for (int j = i - x; j < i && j >= 0; j++) {
            if (v[j] < v[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int j = i + 1; j <= i + y && j < n; j++) {
                if (v[j] < v[i]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
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