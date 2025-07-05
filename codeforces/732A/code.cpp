/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, r;
    cin >> k >> r;
    if (k % 10 == r || k % 10 == 0) {
        cout << 1;
    } else {
        int i = 1, ans = 0, tp = k;
        while (tp % 10 != 0 && tp % 10 != r) {
            tp = k * i++;
            ans++;
        }
        cout << ans;
    }
    return 0;
}
