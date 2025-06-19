#include <bits/stdc++.h>
using namespace std;

void rotate_by_one_place(vector<int> &vec, int n) {
    int temp = vec[0];
    for (int i = 1; i < n; i++) vec[i - 1] = vec[i];
    vec[n - 1] = temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    rotate_by_one_place(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}