/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int fir = (2 * t1) + (s * v1), sec = (2 * t2) + (s * v2);
    if (fir < sec) {
        cout << "First";
    } else if (sec < fir) {
        cout << "Second";
    } else {
        cout << "Friendship";
    }
    return 0;
}
