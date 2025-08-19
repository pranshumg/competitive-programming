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
    vector<vector<char>> v(n, vector<char>(5));
    bool flag = false;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cin >> v[i][j];
        }
        if (!flag) {
            if (v[i][0] == 'O' && v[i][1] == 'O') {
                v[i][0] = '+', v[i][1] = '+';
                flag = true;
            } else if (v[i][3] == 'O' && v[i][4] == 'O') {
                v[i][3] = '+', v[i][4] = '+';
                flag = true;
            }
        }
    }
    if (flag) {
        cout << "YES\n";
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                cout << v[i][j];
            }
            cout << '\n';
        }
    } else {
        cout << "NO\n";
    }
    return 0;
}