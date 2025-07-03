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
    for (int i = 0; i < n; i++) cin >> v[i];
    int max = *(max_element(v.begin(), v.end()));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (max - v[i]);
    }
    cout << ans;
    return 0;
}