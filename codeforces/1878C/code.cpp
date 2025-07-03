/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int64_t n, k, x;
        cin >> n >> k >> x;
        int64_t  min_sum = (k * (k + 1)) / 2;
        int64_t max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        if (x >= min_sum && x <= max_sum)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}