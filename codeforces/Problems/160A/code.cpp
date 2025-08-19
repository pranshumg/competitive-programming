/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t_sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        t_sum += v[i];
    }
    sort(v.rbegin(), v.rend());
    int sum = 0, ans = 0, i = 0;
    while (sum <= t_sum / 2) {
        sum += v[i++], ans++;
    }
    cout << ans;
    return 0;
}