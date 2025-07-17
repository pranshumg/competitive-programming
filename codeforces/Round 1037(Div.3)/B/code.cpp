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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int i = 0, ans = 0;
        while (i <= n - k) {
            bool flag = true;
            for (int j = i; j < i + k; j++) {
                if (v[j] != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) { 
                ans++;
                i += k + 1;
            } else {
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}