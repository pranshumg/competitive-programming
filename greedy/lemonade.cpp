#include <bits/stdc++.h>

using namespace std;

/* Lemonade change */

// TC - O(n), SC - O(1)
bool lemonade(vector<int>& v) {
    int five = 0, ten = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        if (v[i] == 5) {
            ++five;
        } else if (v[i] == 10) {
            if (five) {
                --five, ++ten;
            } else {
                return false;
            }
        } else {
            // Customer gives $20
            // Greedy Strategy: Always prefer giving back $10 + $5 over $5 + $5 + $5.
            // Why? Because $5 bills are more useful (required for both $10 and $20 transactions).
            if (five && ten) {
                --five, --ten;
            } else if (five > 2) {
                five -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}