#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> &vec, int n) {
    int max1 = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] == 1) {
            count++;
            max1 = max(max1, count);
        } else count = 0;
    }
    return max1;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    cout << max_consecutive_ones(vec, n);
    return 0;
}