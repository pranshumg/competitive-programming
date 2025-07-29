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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<char, int> mp;
        char c = 'a';
        string s = "";
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                mp[c]++;
                s += c++;
            } else {
                for (auto it: mp) {
                    if (it.second == v[i]) {
                        s += it.first;
                        mp[it.first]++;
                        break;
                    }
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}