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
    int len = 1, max_len = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            len++;
        } else {
            len = 1;
        }
        max_len = max(max_len, len);
    }
    cout << max_len;   
    return 0;
}
