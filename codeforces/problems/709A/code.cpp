/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, b, d;
    cin >> n >> b >> d;
    int curr, sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr <= b) {
            sum += curr;
        }
        if (sum > d) {
            ans++;
            sum = 0;
        }
    }
    cout << ans;
    return 0;
}
