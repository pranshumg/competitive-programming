// Kadane's Algorithm:

#include <bits/stdc++.h> 

using namespace std;

vector<int> maximum_subarray_sum_idx(vector<int> &a, int n) {
    int maxi = INT_MIN, sum = 0, start, ans_start = -1, ans_end = -1;
    for (int i = 0; i < n; i++) {
        if (sum == 0)
            start = i;
        sum += a[i];
        if (maxi < sum) {
            maxi = sum;
            ans_start = start;
            ans_end = i;
        }
        if (sum < 0)
            sum = 0;
    }
    return {ans_start, ans_end};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ans = maximum_subarray_sum_idx(a, n);
    for (int i = ans[0]; i <= ans[1]; i++)
        cout << a[i] << " ";
    return 0;
}