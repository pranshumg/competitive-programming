/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, m;
    cin >> n >> m;
    int64_t curr, ans = 0, prev = 1;
    for (int64_t i = 0; i < m; i++) {
        cin >> curr;
        if (curr >= prev) {
            ans += curr - prev;
        } else  {
            ans += (n - prev) + curr;
        }
        prev = curr;
    }
    cout << ans;
    return 0;
}
