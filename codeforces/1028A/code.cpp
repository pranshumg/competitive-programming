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
    char curr;
    int B = 0;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> curr;
            if (curr != 'W') {
                B++;
                v.emplace_back(i, j);
            }
        }
    }
    cout << v[B / 2].first << " " << v[B / 2].second;
    return 0;
}
