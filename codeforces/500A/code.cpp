/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> v[i];
    int flag = 0;
    int sum = 1;
    while (sum < n) {
        sum += v[sum - 1];
        if (t == sum) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "YES";
    else cout << "NO";
    return 0;
}