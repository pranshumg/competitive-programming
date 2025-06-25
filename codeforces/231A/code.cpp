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
    vector<int> vec(3 * n);
    for (int i = 0; i < 3 * n; i++) cin >> vec[i]; 
    int i = 0, ans = 0;
    while (i < (3 * n)) {
        int sum = 0, j = i;
        while (j <= i + 2) sum += vec[j++];
        if (sum > 1) ans++;
        i += 3;
    }
    cout << ans;
    return 0;
}