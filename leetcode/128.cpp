#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        if ((int)v.size() == 0) {
            return 0;
        }
        int longest = 1;
        unordered_set<int> st;
        for (int i = 0; i < (int)v.size(); i++) {
            st.insert(v[i]);
        }
        for (auto it: st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1, el = it;
                while (st.find(el + 1) != st.end()) {
                    el++, cnt++;
                }
                if (cnt > longest) {
                    longest = cnt;
                }
            }
        }
        return longest;
    }
};