#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1374/A
Name: Required Remainder
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        int ans = (n / x) * x + y;
        if (ans > n) {
            ans -= x;
        }
        cout << ans << endl;
    }
    return 0;
}