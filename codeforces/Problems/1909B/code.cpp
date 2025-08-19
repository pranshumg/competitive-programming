/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int64_t i = 2;
    while (true) {
        unordered_set<int64_t> st;
        for (int j = 0; j < n; j++) {
            st.insert(v[j] % i);
        }
        if (st.size() == 2) {
            break;
        }
        i *= 2; 
    }
    cout << i << '\n';
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