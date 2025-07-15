/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    int sum = 0;
    for (int i = 0, j = n - 1, k = n / 2; i < n; i++) {
        sum += v[i][i] + v[j--][i] + v[i][k] + v[k][i];
    }
    cout << sum - (3 * v[n / 2][n / 2]);
    return 0;
}