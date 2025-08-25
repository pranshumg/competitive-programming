/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        st.insert(curr);
    }
    cout << ((int)st.size() != n ? "YES\n" : "NO\n");
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