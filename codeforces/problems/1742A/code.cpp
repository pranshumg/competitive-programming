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
        vector<int> v(3);
        for (int i = 0; i < 3; i++) cin >> v[i];
        sort(v.begin(), v.end());
        if (v[0] + v[1] == v[2]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}