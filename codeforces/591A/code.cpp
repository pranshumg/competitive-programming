/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, p, q;
    scanf("%d %d %d", &l, &p, &q);
    double ans = (((double)p / (p + q))) * l;
    printf("%lf", ans);
    return 0;
}