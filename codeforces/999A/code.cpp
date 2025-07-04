/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int i = 0, j = n - 1, ans = 0;
    while (i <= j) {
        if (v[i] <= k) {
            ans++;
            i++;
        } else if (v[j] <= k) {
            ans++;
            j--;
        } else {
            break;
        }
    }
    cout << ans;
    return 0;
}
