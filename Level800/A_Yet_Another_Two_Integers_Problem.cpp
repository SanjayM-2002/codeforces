#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1409/A
Name: Yet Another Two Integers Problem
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        int ans = diff / 10;
        if (diff % 10 != 0) ans++;
        cout << ans << endl;
    }
    return 0;
}