#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/581/A
Name: Vasya the Hipster
TC: O(1)
SC: O(1)
*/
int main () {
    int a, b;
    cin >> a >> b;
    if (a==b) {
        cout << a << " " << 0 << endl;
    } else {
        int res1 = min(a, b);
        if (a > b) {
            a -= res1;
            cout << res1 << " " << a / 2 << endl;
        } else {
            b -= res1;
            cout << res1 << " " << b / 2 << endl;
        }
    }
    return 0;
}