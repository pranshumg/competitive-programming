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
    int num = v[0] > 0 ? v[0] : -(v[0]);
    for (int i = 1; i < n; i++) {
        if (v[i] < num && v[i] >= 0) num = v[i];
        else if (v[i] < 0 && ((0 - v[i]) < num)) num = -(v[i]);
    }
    cout << num;
    return 0;
}
