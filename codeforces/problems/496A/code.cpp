/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = INT_MAX;
    cin >> n;
    vector<int> v(n), temp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i < n - 1; i++) {
        int max_d = 0;
        temp = v;
        temp.erase(temp.begin() + i);
        for (int j = 1; j < temp.size(); j++) {
            max_d = max(max_d, temp[j] - temp[j - 1]);
        }
        ans = min(ans, max_d);
    }
    cout << ans;
    return 0;
}