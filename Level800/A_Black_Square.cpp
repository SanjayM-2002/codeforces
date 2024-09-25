#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/431/A
Name: Black Square
TC: O(t*len)
SC: O(1)
*/
int main () {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            res += a1;
        } else if (s[i] == '2') {
            res += a2;
        } else if (s[i] == '3') {
            res += a3;
        } else if (s[i] == '4') {
            res += a4;
        };
    };
    cout << res << endl;
    return 0;
}