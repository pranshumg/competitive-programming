/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    int elev = (abs(z - x) * t2) + 2 * t3 + (abs(y - x) * t2) + t3;
    int stair = abs(y - x) * t1;
    if (elev <= stair) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
