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
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(v[i]) == mp.end()) {
            cout << "OK\n";
        } else {
            cout << v[i] << mp[v[i]] << '\n';
        }
        mp[v[i]]++;
    }
    return 0;
}