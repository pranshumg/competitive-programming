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
    vector<int> vec(n);
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }
    cout << sum / n;
    return 0;
}