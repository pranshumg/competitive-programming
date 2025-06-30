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
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];
        int ans = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] == 0) {
                count++;
                if (count > ans) ans = count;
            }
            else count = 0;
        }
        cout << ans << '\n';  
    }
    return 0;
}