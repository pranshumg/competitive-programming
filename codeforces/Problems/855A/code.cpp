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
    vector<string> v;
    while (n--) {
        string s;
        cin >> s;
        if (find(v.begin(), v.end(), s) == v.end()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        v.emplace_back(s);
    }
    return 0;
}