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
        int sum = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 0) {
                zero++;
            }
        }   
        if (zero + sum == 0) {
            cout << zero + 1 << '\n';
        } else {
            cout << zero << '\n';
        }
    }
    return 0;
}
