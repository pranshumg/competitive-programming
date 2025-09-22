/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    set<char> st;
    int left = 0, right = 0;
    while (right < (int)s.size()) {
        if (s[left] == s[right]) {
            right++;
        } else {
            if ((right - left) % 2 != 0) {
                st.insert(s[left]);
            }
            left = right;
        }
    }
    if ((right- left) % 2 != 0) {
        st.insert(s[left]);
    }
    for (auto it: st) {
        cout << it;
    }
    cout << '\n';
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