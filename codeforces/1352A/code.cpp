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
        int n, k = 0;
        cin >> n;
        vector<int> ans;
        int z = 10;
        while (n != 0) {
            if (n % z == 0) {
                z *= 10;
            } else {
                int rn = n % z;
                ans.emplace_back(rn);
                n -= rn;
                z *= 10;
                k++;
            }
        }
        cout << k << '\n';
        for (int val : ans) {
            cout << val << " ";          
        }
        cout << '\n';
    }
    return 0;
}