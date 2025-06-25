/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin >> n >> h;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] <= h) ans++;
        else ans += 2;
    }
    cout << ans;
    return 0;
}