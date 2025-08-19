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
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i % 2 == 0 && v[i] % 2 != 0) {
                even++;
            } else if (i % 2 != 0 && v[i] % 2 == 0) {
                odd++;
            }
        }
        if (even == odd) {
            cout << even << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}