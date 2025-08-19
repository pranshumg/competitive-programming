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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            ans++;
        } else if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
