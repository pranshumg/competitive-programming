#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& v) {
        int cnt = 0, el;
        for (int i = 0; i < (int)v.size(); i++) {
            if (cnt == 0) {
                el = v[i], cnt++;
            } else if (v[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return el;
    }
};