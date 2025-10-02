/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        st.insert(curr);
    }
    cout << ((int)st.size() == 1 ? n : 1) << '\n';
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