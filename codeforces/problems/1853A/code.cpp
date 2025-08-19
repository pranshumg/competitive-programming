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
        int n;
        cin >> n;
        vector<int> v(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0 && v[i] - v[i - 1] < mini) {
                mini = v[i] - v[i - 1];
            }
        }
        if (mini < 0) {
            cout << 0 << '\n';
        } else {
            cout << (mini / 2) + 1 << '\n';
        }
    }
    return 0;
}