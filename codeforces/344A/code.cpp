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
    vector<int> v(n);
    int ans = 1;
    for (int i = 0; i < n; i++) cin >> v[i];
    int curr = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] == curr) continue;
        else {
            ans++;
            curr = v[i];
        }
    }
    cout << ans;
    return 0;
}