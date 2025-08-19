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
        int x;
        cin >> x;
        if (x > 0 && x < 10) {
            cout << x << '\n';
        } else if (x > 45) {
            cout << -1 << '\n';
        } else {
            vector<int> v;
            int d = 0;
            for (int i = 9; i >= 1; i--) {
                if (x - (d + i) > 0) {
                    v.emplace_back(i), d += i;
                } else {
                    v.emplace_back(x - d);
                    break;
                }
            }
            sort(v.begin(), v.end());
            for (auto it: v) {
                cout << it;
            }
            cout << '\n';
        }
    }
    return 0;
}