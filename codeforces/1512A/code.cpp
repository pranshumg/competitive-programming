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
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mpp[v[i]]++;
        }
        for (auto it : mpp) {
            if (it.second == 1) {
                auto idx = find(v.begin(), v.end(), it.first);
                cout << (idx - v.begin() + 1) << '\n';
            }
        }    
    }
    return 0;
}