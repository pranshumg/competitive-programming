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
    vector<int> v = {1};
    for (int i = 1; i < n; i++) {
        v.emplace_back(1);
        while (v.size() >= 2 && (v[v.size() - 1] == v[v.size() - 2])) {
            v.pop_back();
            v[v.size() - 1]++;
        }
    }   
    for (auto it: v) {
        cout << it << " ";
    }
    return 0;
}