#include <bits/stdc++.h>
using namespace std;

void func(int idx, vector<int> &vec, int s, int sum, int arr[], int n) {
    if (idx == n) {
        if (s == sum) {
            for (auto it : vec) cout << it << " ";
            cout << endl;
        }
        return;
    }
    vec.emplace_back(arr[idx]);
    s += arr[idx];
    func(idx + 1, vec, s, sum, arr, n);
    s -= arr[idx];
    vec.pop_back();
    func(idx + 1, vec, s, sum, arr, n);

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