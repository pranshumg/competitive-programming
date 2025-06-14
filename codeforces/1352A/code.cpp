#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k = 0;
        cin >> n;

        vector<int> ans;
        int z = 10;
        while (n != 0) {
            if (n % z == 0) {
                z *= 10;
            } else {
                int rn = n % z;
                ans.push_back(rn);
                n -= rn;
                z *= 10;
                k++;
            }
        }

        cout << k << endl;

        for (int val : ans) {
            cout << val << " ";          
        }
        cout << endl;
    }

    return 0;
}