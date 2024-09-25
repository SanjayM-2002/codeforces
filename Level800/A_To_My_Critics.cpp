#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1850/A
Name: To My Critics
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        string res = "NO";
        if (a+b >= 10 || b+c >= 10 || a+c >= 10) {
            res = "YES";
        };
        cout << res << endl;
    }
    return 0;
}