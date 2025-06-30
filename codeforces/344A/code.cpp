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
    vector<int> vec(n);
    int ans = 1;
    for (int i = 0; i < n; i++) cin >> vec[i];
    int curr = vec[0];
    for (int i = 1; i < n; i++) {
        if (vec[i] == curr) continue;
        else {
            ans++;
            curr = vec[i];
        }
    }
    cout << ans;
    return 0;
}