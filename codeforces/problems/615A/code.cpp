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
    while (n--) {
        int size, curr;
        cin >> size;
        for (int i = 0; i < size; i++) {
            cin >> curr;
            st.insert(curr);
        }
    }
    if (st.size() == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}