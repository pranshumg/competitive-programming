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
    vector<int> vec1(n);
    for (int i = 0; i < n; i++) cin >> vec1[i];
    vector<int> vec2;
    int ans = 0;
    vec2.emplace_back(vec1[0]);
    for (int i = 1; i < n; i++) {
        int max = *(max_element(vec2.begin(), vec2.end())); 
        int min = *(min_element(vec2.begin(), vec2.end()));
        if (vec1[i] > max || vec1[i] < min) {
            ans++;
            vec2.emplace_back(vec1[i]);
        }
    }
    cout << ans;
    return 0;
}