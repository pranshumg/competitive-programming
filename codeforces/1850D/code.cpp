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
        int seq = 1, cnt = 1;
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] <= k) {
                cnt++;
            } else {
                cnt = 1;
            }
            seq = max(seq, cnt);
        }
        cout << n - seq << '\n';
    }
    return 0;
}