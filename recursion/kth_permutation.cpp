#include <bits/stdc++.h>

using namespace std;

/* Kth permutations */

// TC - O(n * n), SC - O(n)
string kth_permutation(int n, int k) {
    int fact = 1;
    vector<int> nums;
    for (int i = 1; i < n; ++i) {
        fact *= i;
        nums.emplace_back(i);
    }
    nums.emplace_back(n);
    string ans = "";
    --k;
    while (true) {
        ans += to_string(nums[k / fact]);
        nums.erase(nums.begin() + k / fact);
        if ((int)nums.size() == 0) {
            break;
        }
        k %= fact;
        fact /= (int)nums.size();
    }
    return ans;
}