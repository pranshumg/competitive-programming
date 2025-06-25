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
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> vec[i];
    int flag = 0;
    int sum = 1;
    while (sum < n) {
        sum += vec[sum - 1];
        if (t == sum) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "YES";
    else cout << "NO";
    return 0;
}