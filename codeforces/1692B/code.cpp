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
        set<int> st;
        int curr;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            st.insert(curr);
        }
        if ((n - st.size()) % 2 != 0) {
            cout << st.size() - 1 << '\n';
        } else {
            cout << st.size() << '\n';
        }
    }
    return 0;
}