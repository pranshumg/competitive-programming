/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    vector<int> idx;
    for (int i = 0; i < v.size(); i++) {
        bool flag = true;
        for (int j = 0; j < v[i].size(); j++) {
            cin >> v[i][j];
            if (v[i][j] == 1 || v[i][j] == 3) {
                flag = false;
            }
        }
        if (flag) {
            ans++;
            idx.emplace_back(i + 1);
        }
    }
    cout << ans << '\n';
    if (ans != 0) {
        for (auto it: idx) {
            cout << it << ' ';
        }
    }
    return 0;
}