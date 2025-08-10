/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans[i] = -1;
            } else {
                ans[i] = 3;
            }
        }
        if (n % 2 == 0) {
            ans[n - 1] = 2;
        }
        for (auto it: ans) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}