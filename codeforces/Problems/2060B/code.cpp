/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
        sort(v[i].begin(), v[i].end());
    }
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v[j][0] + (n * i) != v[j][i]) {
                cout << -1 << '\n';
                return;
            } 
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[j][0] == i) {
                ans.push_back(j + 1);
                break;
            }
        }
    }
    for (auto it: ans) {
        cout << it << ' ';
    }
    cout << '\n';
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