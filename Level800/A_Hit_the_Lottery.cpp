#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/996/A
Name: Hit the Lottery
TC: O(1)
SC: O(1)
*/
int main () {
    int res = 0;
    int n;
    cin >> n;
    if (n >= 100) {
        res += n / 100;
        n %= 100;
    };
    if (n >= 20) {
        res += n / 20;
        n %= 20;
    };
    if (n >= 10) {
        res += n / 10;
        n %= 10;
    };
    if (n >= 5) {
        res += n / 5;
        n %= 5;
    };
    if (n >= 1) {
        res += n;
        n = 0;
    }
    cout << res << endl;
    
    return 0;
}