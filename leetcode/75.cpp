#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& v) {
        int low = 0, mid = 0, high = (int)v.size() - 1;
        while (mid <= high) {
            if (v[mid] == 0) {
                swap(v[low++], v[mid++]);
            } else if (v[mid] == 1) {
                mid++;
            } else {
                swap(v[mid], v[high--]);
            }
        }
    }
};