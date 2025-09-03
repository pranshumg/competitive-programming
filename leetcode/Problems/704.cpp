#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& v, int target) {
        int low = 0, high = (int)v.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] == target) {
                return mid;
            } else if (v[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;   
    }
};