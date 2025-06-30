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
        sort(vec.begin(), vec.end());
        int i = 0;
        while (i < vec.size() - 1) {
            if (vec[i + 1] - vec[i] <= 1) vec.erase(vec.begin() + i);
            else i++;
        }
        if (vec.size() == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}