/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[vec[i]] = i + 1;
    for (auto it : mpp) {
        cout << it.second << " ";
    }
    return 0;
}