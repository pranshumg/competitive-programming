/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int curr;
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans.emplace_back(v[i] / 2);
    }
    int sum = accumulate(ans.begin(), ans.end(), 0);
    if (sum > 0) {
        for (int i = 0; i < n && sum > 0; i++) {
            if (v[i] % 2 != 0 && v[i] < 0) {
                ans[i]--, sum--;
            }
        }
    } else if (sum < 0) {
        for (int i = 0; i < n && sum < 0; i++) {
            if (v[i] % 2 != 0 && v[i] > 0) {
                ans[i]++, sum++;
            }
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