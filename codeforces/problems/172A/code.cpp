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
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < v[0].size(); i++) {
        for (int j = 0; j < n - 1; j++) {
            if (v[j][i] == v[j + 1][i]) {}
            else {
                cout << ans;
                return 0;
            }
        }
        ans++;
    }
    cout << ans;
    return 0;
}
