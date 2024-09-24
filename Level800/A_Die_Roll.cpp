#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/9/A
Name: Die Roll
TC: O(1)
SC: O(1)
*/
int main () {
    int y, w;
    cin >> y >> w;
    int num = 6 - max(y, w) + 1;
    int den = 6;
    int a, b;
    if (num == den) {
        a = 1;
        b = 1;
    } else if (num % 2 == 0) {
        a = num / 2;
        b = den / 2;
    } else if (num % 3 == 0) {
        a = num / 3;
        b = den / 3;
    } else {
        a = num;
        b = den;
    };
    cout << a << "/" << b << endl;
    return 0;
}