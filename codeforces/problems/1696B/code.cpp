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
        int n, cnt = 0;
        cin >> n;
        bool flag = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) {
                flag = false;
            } else {
                if (!flag) {
                    cnt++;
                    flag = true;
                }
            }
        }
        if (cnt > 2) {
            cout << 2 << '\n';
        } else {
            cout << cnt << '\n';
        }
    }
    return 0;
}