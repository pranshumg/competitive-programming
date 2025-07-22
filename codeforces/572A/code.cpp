/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n1, n2, k, m;
    cin >> n1 >> n2 >> k >> m;
    vector<int> v1(n1), v2(n2);
    for (int i = 0; i < n1; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> v2[i];
    }
    if (v1[k - 1] < v2[n2 - m]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}