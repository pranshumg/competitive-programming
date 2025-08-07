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
    string s;
    cin >> s;
    vector<char> odd, even;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even.emplace_back(s[i]);
        } else {
            odd.emplace_back(s[i]);
        }
    }
    if (n % 2 == 0) {
        reverse(even.begin(), even.end());
        for (auto it: even) {
            cout << it;
        }
        for (auto it: odd) {
            cout << it;
        }
    } else {
        reverse(odd.begin(), odd.end());
        for (auto it: odd) {
            cout << it;
        }
        for (auto it: even) {
            cout << it;
        }
    }
    return 0;
}