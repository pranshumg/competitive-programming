/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    set<int> st;
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            st.insert(j);
        }
    }
    cout << m - st.size() << '\n';
    if (m - st.size() != 0) {
        for (int i = 1; i <= m; i++) {
            if (st.find(i) == st.end()) {
                cout << i << " ";
            }
        }
    }
    return 0;
}
