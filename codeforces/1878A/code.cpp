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
        for (int i = 0; i < n; i++) cin >> v[i];
        bool flag = false;
        for (auto it : v) {
            if (it == k) {
                flag = true;
                break;
            }
        }
        if (flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
