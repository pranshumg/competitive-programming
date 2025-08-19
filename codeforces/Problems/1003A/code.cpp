/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int curr;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        mp[curr]++;
    }
    int maxi = INT_MIN;
    for (auto it: mp) {
        maxi = max(maxi, it.second);
    }
    cout << maxi;
    return 0;
}
