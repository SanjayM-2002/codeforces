#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/271/A
Name: Beautiful Year
TC: O(1) // constraints : 1000 < y < 9000
SC: O(1)
*/

bool hasDistinctDigits(int year) {
    set<int> digits; 
    while (year > 0) {
        int digit = year % 10;
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main () {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            cout << y << endl; 
            break;
        }
    }
    return 0;
}