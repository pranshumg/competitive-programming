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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[v[i]] = i + 1;
    for (auto it : mpp) {
        cout << it.second << " ";
    }
    return 0;
}