/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;
    if (find(v.begin(), v.end(), x) == v.end()) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}