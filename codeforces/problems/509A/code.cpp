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
    for (int i = 0; i < v[0].size(); i++) {
        v[0][i] = 1;
    }
    for (int i = 1; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            int k = j;
            while (k >= 0) {
                v[i][j] += v[i - 1][k--];
            }
        }
    }
    cout << v[n - 1][n - 1];
    return 0;
}