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
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            mpp[vec[i]]++;
        }
        for (auto it : mpp) {
            if (it.second == 1) {
                auto idx = find(vec.begin(), vec.end(), it.first);
                cout << (idx - vec.begin() + 1) << '\n';
            }
        }    
    }
    return 0;
}