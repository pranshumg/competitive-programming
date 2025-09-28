/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b;
    cin >> a >> b;
    int64_t c = a + b;
    string A = to_string(a), B = to_string(b), C = to_string(c);
    string D, E, F;
    for (int i = 0; i < (int)A.size(); i++) {
        if (A[i] != '0') {
            D += A[i];
        }
    }
    for (int i = 0; i < (int)B.size(); i++) {
        if (B[i] != '0') {
            E += B[i];
        }
    }
    for (int i = 0; i < (int)C.size(); i++) {
        if (C[i] != '0') {
            F += C[i];
        }
    }
    int64_t d = stoi(D), e = stoi(E), f = stoi(F);
    cout << (d + e == f ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}