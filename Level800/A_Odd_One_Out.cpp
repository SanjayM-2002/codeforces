#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1915/A
Name: Odd One Out
TC: O(1)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int res = a ^ b ^ c;
        cout << res << endl;
    }
    return 0;
}