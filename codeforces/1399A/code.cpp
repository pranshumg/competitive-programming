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
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int i = 0;
        while (i < v.size() - 1) {
            if (v[i + 1] - v[i] <= 1) v.erase(v.begin() + i);
            else i++;
        }
        if (v.size() == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}