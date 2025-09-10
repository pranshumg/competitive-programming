/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<pair<string, int>> vp(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
        mp[vp[i].first] += vp[i].second;
    }
    int score = INT_MIN;
    string ans;
    for (auto it: mp) {
        if (it.second > score) {
            ans = it.first, score = it.second;
        }
    }
    vector<string> tmp;
    int cnt = 0;
    for (auto it: mp) {
        if (it.second == score) {
            tmp.emplace_back(it.first);
            cnt++;
        }
    }
    if (cnt < 2) {
        cout << ans << '\n';
        return;
    }
    int s_idx = INT_MAX;
    for (auto it: tmp) {
        int cnt = 0, idx;
        string s;
        for (int i = 0; i < n; i++) {
            if (vp[i].first == it) {
                cnt += vp[i].second;
            }
            if (cnt >= score) {
                s = vp[i].first, idx = i;
                break;
            }
        }
        if (s_idx > idx) {
            ans = s, s_idx = idx;
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