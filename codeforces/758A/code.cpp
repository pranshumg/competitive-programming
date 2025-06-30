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
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int max = *(max_element(vec.begin(), vec.end()));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (max - vec[i]);
    }
    cout << ans;
    return 0;
}