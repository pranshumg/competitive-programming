/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;
    printf("%.10lf", (double)(L - d) / (v1 + v2));
    return 0;
}