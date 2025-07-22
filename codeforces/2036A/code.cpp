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
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) != 5 && abs(v[i] - v[i - 1]) != 7) {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}