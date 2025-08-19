/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int MAX(vector<int>& v, int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }
    int freq = mp[v[0]];
    for (auto it: mp) {
        if (it.second > freq) {
            freq = it.second;
        }
    }
    return freq;
}

void run_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int max_freq = MAX(v, n), i = max_freq, ans = n - max_freq, clone = 0;
    while (clone < n - max_freq) {
        clone += i, i *= 2;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}