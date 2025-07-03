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
    vector<int> v1(n);
    for (int i = 0; i < n; i++) cin >> v1[i];
    vector<int> v2;
    int ans = 0;
    v2.emplace_back(v1[0]);
    for (int i = 1; i < n; i++) {
        int max = *(max_element(v2.begin(), v2.end())); 
        int min = *(min_element(v2.begin(), v2.end()));
        if (v1[i] > max || v1[i] < min) {
            ans++;
            v2.emplace_back(v1[i]);
        }
    }
    cout << ans;
    return 0;
}