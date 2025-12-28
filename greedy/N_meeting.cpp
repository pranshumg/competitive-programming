#include <bits/stdc++.h>

using namespace std;

/* N Meeting in one room */

struct Data {
    int start, end, pos;
};

// TC - O(n log n), SC - O(n)
pair<int, vector<int>> meetings(vector<int>& start, vector<int>& end) {
    vector<Data> v((int)start.size());
    for (int i = 0; i < (int)v.size(); ++i) {
        v[i].start = start[i];
        v[i].end = end[i];
        v[i].pos = i + 1;
    }
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
        if (a.end != b.end) {
            return a.end < b.end;
        }
        return a.id < b.id;
    });
    vector<int> ans;
    int freetime = -1;
    for (auto &it : v) {
        if (it.start > freetime) {
            ans.emplace_back(it.pos);
            freetime = it.end;
        }
    }
    return {(int)ans.size(), ans}; 
}