/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        vector<string> v(8);
        for (int i = 0; i < 8; i++) {
            cin >> v[i];
        }
        bool flag = false;
        for (int i = 1; i < 7; i++) {
            for (int j = 1; j < 7; j++) {
                if (v[i][j] == '#' && v[i - 1][j - 1] == '#' && v[i - 1][j + 1] == '#' && v[i + 1][j - 1] == '#' && v[i + 1][j + 1] == '#') {
                    cout << i + 1 << " " << j + 1 << '\n';
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
    }
    return 0;
}
