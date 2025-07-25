/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min({((2 * d1) + (2 * d2)), d1 + d2 + d3, ((2 * d2) + (2 * d3)), ((2 * d1) + (2 * d3))});
    return 0;
}