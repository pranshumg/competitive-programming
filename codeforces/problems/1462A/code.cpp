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
        vector<int> v(n), ans;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (v.size() % 2 != 0) {
            int i = 0, j = n - 1;
            while (i < j) {
                ans.emplace_back(v[i++]);
                ans.emplace_back(v[j--]);
            }
            ans.emplace_back(v[j]);
            for (auto it: ans) {
                cout << it << " ";
            }
            cout << "\n";
        } else {
            int i = 0, j = n - 1;
            while (i < j) {
                ans.emplace_back(v[i++]);
                ans.emplace_back(v[j--]);
            }
            for (auto it: ans) {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
