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
    vector<int> v(n * 2);
    for (int i = 0; i < n * 2; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < v.size() - 2; i++) {
        if (i % 2 == 0) {
            for (int j = i + 3; j < v.size(); j += 2) {
                if (v[i] == v[j]) {
                    ans++;
                }
            }
        } else {
            for (int j = i + 1; j < v.size() - 1; j += 2) {
                if (v[i] == v[j]) {
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
