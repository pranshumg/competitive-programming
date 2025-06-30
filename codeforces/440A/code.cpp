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
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n - 1; i++) {
        if (vec[i] != i + 1) {
            cout << i + 1;
            return 0;
        }
    }
    cout << n;
    return 0;
}