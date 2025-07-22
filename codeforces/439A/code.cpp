/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    if (((n - 1) * 10) + sum > d) {
        cout << -1;
    } else {
        cout << (d - sum) / 5;
    }  
    return 0;
}