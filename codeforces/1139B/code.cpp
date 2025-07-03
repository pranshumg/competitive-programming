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
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    long long sum = v[n - 1];  
    int i = n - 2;
    while (i >= 0) {
        if (v[i] >= v[i + 1]) v[i] = v[i + 1] - 1;  
        if (v[i] >= 0) sum += v[i];
        i--;
    }
    cout << sum;
    return 0;
}
