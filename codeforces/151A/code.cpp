#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, l ,c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int total_milk = (k * l) / nl;
    int slices_of_lime =  c * d;
    int salt_needed = p / np;
 
    int ans = min({total_milk, slices_of_lime, salt_needed}) / n;
 
    cout << ans << endl;
 
    return 0;
}