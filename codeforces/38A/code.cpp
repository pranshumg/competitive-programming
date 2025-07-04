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
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
    }
    int a, b;
    cin >> a >> b;
    int ans = 0, x = a;
    for (int i = 0; i < b - a; i++) {
        ans += v[x++ - 1];
    }
    cout << ans;
    return 0;
}
