#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& v, int low, int mid, int high) {
        vector<int> tmp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high) {
            if (v[left] <= v[right]) {
                tmp.push_back(v[left++]);
            } else {
                tmp.push_back(v[right++]);
            }
        }
        while (left <= mid) {
            tmp.push_back(v[left++]);
        }
        while (right <= high) {
            tmp.push_back(v[right++]);
        }
        for (int i = low; i <= high; i++) {
            v[i] = tmp[i - low];
        }
    }

    int count_pairs(vector<int>& v, int low, int mid, int high) {
        int right = mid + 1, cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && v[i] > (int64_t)2 * v[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int merge_sort_count(vector<int>& v, int low, int high) {
        int cnt = 0;
        if (low >= high) {
            return cnt;
        }
        int mid = (low + high) / 2;
        cnt += merge_sort_count(v, low, mid);
        cnt += merge_sort_count(v, mid + 1, high);
        cnt += count_pairs(v, low, mid, high);
        merge(v, low, mid, high);
        return cnt;
    }

    int reversePairs(vector<int>& v) {
        return merge_sort_count(v, 0, (int)v.size() - 1);
    }
};