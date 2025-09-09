/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k;
    cin >> n >> k;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    int sub = 0, i = 0;
    while (i < n && k > 0) {
        if (v[i] - sub > 0) {
            ans.emplace_back(v[i] - sub);
            sub += v[i] - sub, k--;
        }
        i++;
    }
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            ans.emplace_back(0);
        }
    }
    for (auto it: ans) {
        cout << it << '\n';
    }
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