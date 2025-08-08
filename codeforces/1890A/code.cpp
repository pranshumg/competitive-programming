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
        int curr;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            mp[curr]++;
        }
        if (mp.size() == 1) {
            cout << "YES\n";
        } else if (mp.size() == 2) {
            int cnt1 = 0, cnt2 = 0;
            for (auto it: mp) {
                if (cnt1 == 0) {
                    cnt1 = it.second;
                } else {
                    cnt2 = it.second;
                }
            }
            if (n % 2 == 0) {
                if (cnt1 == cnt2) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                if (abs(cnt2 - cnt1) == 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}