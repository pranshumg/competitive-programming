#include <bits/stdc++.h>
using namespace std;

bool func(int idx, vector<int> &vec, int s, int sum, int arr[], int n) {
    if (idx == n) {
        if (s == sum) {
            for (auto it : vec) cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }
    vec.emplace_back(arr[idx]);
    s += arr[idx];
    if (func(idx + 1, vec, s, sum, arr, n) == true) return true;
    vec.pop_back();
    s -= arr[idx];
    if (func(idx + 1, vec, s, sum, arr, n) == true) return true;
    return false;
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum;
    cin >> sum;
    vector<int> vec;
    func(0, vec, 0, sum, arr, n);
    return 0;
}