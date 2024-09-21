#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1692/A
Name: Marathon
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int res = 0;
        if (b > a) res++;
        if (c > a) res++;
        if (d > a) res++;
        cout << res << endl;
    };
    return 0;
}