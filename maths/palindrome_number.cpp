#include <bits/stdc++.h>

using namespace std;

/* Palindrome number */

// TC - O(log n)
bool palindrome_number(int n) {
    int rev = 0, og = n;
    while (n) {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    return og == rev;
}