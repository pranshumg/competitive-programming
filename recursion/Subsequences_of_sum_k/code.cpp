#include <bits/stdc++.h>
using namespace std;

void func(int idx, vector<int> &vec, int sum, int k, int arr[], int n) {
    if (idx == n) {
        if (sum == k) {
            for (auto it : vec) cout << it << " ";
            cout << endl;
        }
        return;
    }
    vec.emplace_back(arr[idx]);
    sum += arr[idx];
    func(idx + 1, vec, sum, k, arr, n);
    sum -= arr[idx];
    vec.pop_back();
    func(idx + 1, vec, sum, k, arr, n);

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