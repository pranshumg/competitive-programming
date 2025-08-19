/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            st.insert(i);
        } 
    }
    if ((int)st.size() == 0) {
        cout << n << '\n';
    } else {
        int mini = *st.begin(), maxi = *st.rbegin();
        if ((n - 1) - mini > maxi) {
            cout << (n - mini) * 2 << '\n';
        } else  {
            cout << (maxi + 1) * 2 << '\n';
        } 
    }
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