#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        if ((int)v.size() == 1) {
            return v[0];
        }
        if (v[0] != v[1]) {
            return v[0];
        }
        if (v[(int)v.size() - 1] != v[(int)v.size() - 2]) {
            return v.back();
        }
        int low = 1, high = (int)v.size() - 2;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] != v[mid - 1] && v[mid] != v[mid + 1]) {
                return v[mid];
            }
            if ((mid % 2 == 0 && v[mid] == v[mid + 1]) || (mid % 2 != 0 && v[mid] == v[mid - 1])) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};