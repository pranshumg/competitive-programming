#include <bits/stdc++.h>

using namespace std;

/* Find the rightmost set bit */

int rightmost(int n) {
    return n & ~(n - 1);
}