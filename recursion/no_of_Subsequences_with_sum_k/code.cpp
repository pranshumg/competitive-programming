#include <bits/stdc++.h>
using namespace std;

int func(int idx, int sum, int k, int arr[], int n) {
    if (sum > k) return 0;
    if (idx == n) {
        if (sum == k) return 1;
        else return 0;
    }
    sum += arr[idx];
    int l = func(idx + 1, sum, k, arr, n);
    sum -= arr[idx];
    int r = func(idx + 1, sum, k, arr, n);
    return l + r; 
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    cout << func(0, 0, k, arr, n) << endl;
    return 0;
}