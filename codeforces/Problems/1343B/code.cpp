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
        if (n % 4 != 0) {
            cout << "NO\n";
        } else {
            vector<int> ans;
            for (int i = 2; i <= n; i += 2) {
                ans.emplace_back(i);
            }
            int sum1 = accumulate(ans.begin(), ans.end(), 0);
            for (int i = 1; i < n - 2; i += 2) {
                ans.emplace_back(i);
            }
            int sum2 = accumulate(ans.begin() + n / 2, ans.end(), 0);
            ans.emplace_back(sum1 - sum2);
            cout << "YES\n";
            for (auto it: ans) {
                cout << it << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}