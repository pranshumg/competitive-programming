/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int m, n, one = 0;
    cin >> m >> n;
    vector<int> row(m, 1), col(n, 1);
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            if (v[i][j] == 0) {
                row[i] = 0, col[j] = 0;
            } else {
                one++;
            }
        }
    }
    bool flag = true;
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((row[i] | col[j]) != v[i][j]) {
                flag = false;
                break;
            }
            if (!row[i] || !col[j]) {
                v[i][j] = 0, cnt++;
            }
        }
    }
    if (!flag || (one > 0 && cnt == m * n)) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}