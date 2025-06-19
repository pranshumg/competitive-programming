#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &vec, int n) {
    for (int i = 1; i < n; i++) {
        if (vec[i] >= vec[i - 1]) {}
        else return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    bool ans = is_sorted(vec, n);
    cout << boolalpha << ans;
    return 0;
}