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
    vector<int> v(n), odd;
    int64_t sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            sum += v[i];
        } else {
            odd.emplace_back(v[i]);
        }
    }
    sort(odd.rbegin(), odd.rend());
    if (odd.size() % 2 != 0) {
        odd.pop_back();
    }
    for (auto it: odd) {
        sum += it;
    }
    cout << sum;
    return 0;
}