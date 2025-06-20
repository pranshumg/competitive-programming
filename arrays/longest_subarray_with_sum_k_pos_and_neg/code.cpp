// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

int longest_subarray_with_sum_k(vector<int> &vec, int n, int k) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += vec[j];
            if (sum == k) len = max(len, j - i + 1);
        }
    }
    return len;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    cout << longest_subarray_with_sum_k(vec, n, k);
    return 0;
}
*/

// Hashing (Optimized):

#include <bits/stdc++.h>
using namespace std;

int longest_subarray_with_sum_k(vector<int> &vec, int n, int k) {
    map<long long, int> pre_sum_map;
    int max_len = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
        if (sum == k) max_len = max(max_len, i + 1);
        long long rem = sum - k;
        if (pre_sum_map.find(rem) != pre_sum_map.end()) {
            int len = i - pre_sum_map[rem];
            max_len = max(max_len, len);
        }
        if (pre_sum_map.find(sum) == pre_sum_map.end()) pre_sum_map[sum] = i;
    }
    return max_len;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    cout << longest_subarray_with_sum_k(vec, n, k);
    return 0;
}