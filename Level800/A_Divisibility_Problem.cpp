#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1328/A
Name: Divisibility Problem
TC: O(1)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a % b == 0) res = 0;
        else res = b - a % b;
        cout << res <<endl;
    };
    

    return 0;
}