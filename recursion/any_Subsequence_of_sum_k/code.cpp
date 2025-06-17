#include <bits/stdc++.h>
using namespace std;

bool func(int idx, vector<int> &vec, int sum, int k, int arr[], int n) {
    if (idx == n) {
        if (sum == k) {
            for (auto it : vec) cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }
    vec.emplace_back(arr[idx]);
    sum += arr[idx];
    if (func(idx + 1, vec, sum, k, arr, n) == true) return true;
    vec.pop_back();
    sum -= arr[idx];
    if (func(idx + 1, vec, sum, k, arr, n) == true) return true;
    return false;
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    vector<int> vec;
    func(0, vec, 0, k, arr, n);
    return 0;
}