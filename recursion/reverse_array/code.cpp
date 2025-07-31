#include <bits/stdc++.h>

using namespace std;

// TC - O(n)
// SC - O(n)
void func(vector<int>& v, int i, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(v[i], v[n - i - 1]);
    func(v, i + 1, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    func(v, 0, n);
    for (auto it: v) {
        cout << it << ' ';
    }
    return 0;
}