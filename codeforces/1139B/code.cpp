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
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    long long sum = vec[n - 1];  
    int i = n - 2;
    while (i >= 0) {
        if (vec[i] >= vec[i + 1]) vec[i] = vec[i + 1] - 1;  
        if (vec[i] >= 0) sum += vec[i];
        i--;
    }
    cout << sum;
    return 0;
}
