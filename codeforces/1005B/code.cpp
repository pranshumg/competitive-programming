/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int eq = 0;
    if (s[s.size() - 1] != t[t.size() - 1]) {
        cout << s.size() + t.size();
    }
    else if (s.size() <= t.size()) {
        for (int i = s.size() - 1, j = t.size() - 1; i >= 0; i--) {
            if (s[i] == t[j--]) {
                eq++;
            } else {
                break;
            }
        }
        cout << (s.size() - eq) + (t.size() - eq);
    } else {
        for (int i = s.size() - 1, j = t.size() - 1; j >= 0; j--) {
            if (s[i--] == t[j]) {
                eq++;
            } else {
                break;
            }
        }
        cout << (s.size() - eq) + (t.size() - eq);
    }
    return 0;
}
