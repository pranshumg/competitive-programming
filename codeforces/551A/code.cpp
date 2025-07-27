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
    vector<int> v(n), temp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    temp = v;
    sort(temp.begin(), temp.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        auto it = find(temp.begin(), temp.end(), v[i]);
        cout << 1 + (it - temp.begin()) << ' ';
    }
    return 0;
}