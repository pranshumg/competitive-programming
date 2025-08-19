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
       int n, k1, k2;
       cin >> n >> k1 >> k2;
       vector<int> v1(k1), v2(k2);
       for (int i = 0; i < k1; i++) {
            cin >> v1[i];
       }
       for (int i = 0; i < k2; i++) {
            cin >> v2[i];
       }
       if (find(v1.begin(), v1.end(), n) == v1.end()) {
            cout << "NO\n";
       } else {
            cout << "YES\n";
       }
    }
    return 0;
}