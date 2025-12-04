#include <bits/stdc++.h>

using namespace std;

/* Rat in a maze */

void solve(int i, int j, vector<vector<int>>& m, vector<string>& ans, string move, vector<vector<int>>& vis, int di[], int dj[]) {
    if (i == (int)m.size() - 1 && j == (int)m.size() - 1) {
        ans.emplace_back(move);
        return;
    }
    string dir = "DLRU";
    for (int idx = 0; idx < (int)dir.size(); ++idx) {
        int nexti = i + di[idx];
        int nextj = i + dj[idx];
        if (nexti >= 0 && nexti < (int)m.size() && nextj >= 0 && nextj < (int)m.size() && !vis[nexti][nextj] && m[nexti][nextj] == 1) {
            vis[i][j] = 1;
            solve(nexti, nextj, m, ans, move + dir[idx], vis, di, dj);
            vis[i][j] = 0;
        }
    }
}

vector<string> maze(vector<vector<int>>& m) {
    int n = (int)m.size();
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1) {
        solve(0, 0, m, ans, "", vis, di, dj);
    }
    return ans;
}