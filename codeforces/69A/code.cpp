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
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < (3 * n) - 2; i += 3) {
        sum_x += vec[i];
        sum_y += vec[i + 1];
        sum_z += vec[i + 2];
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES";
    else cout << "NO";
    return 0;
}