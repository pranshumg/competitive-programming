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
        string s;
        cin >> s;
        string sub = s.substr(1, n - 2);
        set<char> st(sub.begin(), sub.end());
        if (sub.size() == st.size() && sub.find(s[0]) == string::npos && sub.find(s[n - 1]) == string::npos) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}