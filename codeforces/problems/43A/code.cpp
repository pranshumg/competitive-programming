/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    string curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        mp[curr]++;
    }
    string ans = curr;
    int freq = mp[ans];
    for (auto it: mp) {
        if (it.second > freq) {
            freq = it.second;
            ans = it.first;
        }
    }
    cout << ans;
    return 0;
}