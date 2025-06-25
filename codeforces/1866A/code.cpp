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
    for (int i = 0; i < n; i++) cin >> vec[i];
    int num = vec[0] > 0 ? vec[0] : -(vec[0]);
    for (int i = 1; i < n; i++) {
        if (vec[i] < num && vec[i] >= 0) num = vec[i];
        else if (vec[i] < 0 && ((0 - vec[i]) < num)) num = -(vec[i]);
    }
    cout << num;
    return 0;
}
