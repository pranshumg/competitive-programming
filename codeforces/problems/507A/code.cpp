/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k, curr;
    cin >> n >> k;
    multimap<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        mp.insert({curr, i + 1});
    }
    unordered_set<int> st;
    int ans = 0, sum = 0;
    for (auto it: mp) {
        if (sum + it.first <= k) {
            sum += it.first, ans++;
            st.insert(it.second);
        } else {
            break;
        }
    }
    cout << ans << '\n';
    for (auto it: st) {
        cout << it << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}