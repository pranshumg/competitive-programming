#include <bits/stdc++.h>
using namespace std;

void func(int idx, vector<int> &vec, int arr[], int n) {
    if (idx == n) {
        for (auto it : vec) cout << it << " ";
        if (vec.size() == 0) cout << "{}";
        cout << endl;
        return;
    }
    vec.emplace_back(arr[idx]);
    func(idx + 1, vec, arr, n);
    vec.pop_back();
    func(idx + 1, vec, arr, n);
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> vec;
    func(0, vec, arr, n);
    return 0;
}