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
        string s;
        cin >> s;
        int ans = 0;
        map<char, int> mpp;
        for (int i = 0; i < n; i++) mpp[s[i]]++;
        for (auto it : mpp) {
            ans += mpp[it.first] + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}