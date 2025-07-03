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
    vector<int> v(2 * n);
    for(int i = 0; i < 2 * n; i++) cin >> v[i];
    int ans = 0;
    for (int i = 0; i < 2 * n - 1; i += 2) {
        if (v[i + 1] - v[i] >= 2) ans++;
    }
    cout << ans;
    return 0;
}