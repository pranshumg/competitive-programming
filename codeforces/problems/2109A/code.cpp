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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (v[0] == v[1] && n == 2) {
            cout << "YES\n";
        } else {
            bool flag = false;
            int zero = 0;
            for (int i = 0; i < n - 1; i++) {
                if (v[i] == 0) {
                    zero++;
                }
                if (v[i] == 0 && v[i + 1] == 0) {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
            if (v[n - 1] == 0) {
                zero++;
            } 
            if (!flag) {
                if (zero == 0) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }    
    return 0;
}
