#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/32/B
Name: Borze
TC: O(n)
SC: O(1)
*/
int main () {
    string s;
    cin >> s;
    int len = s.length();
    string res;
    int i = 0;
    while (i < len) {
        if (s[i] == '.') {
            res += '0';
            i++;
        } else if (s[i] == '-' && s[i + 1] == '.') {
            res += '1';
            i += 2;
        } else if (s[i] == '-' && s[i + 1] == '-') {
            res += '2';
            i += 2;
        };
    };
    cout << res << endl;
    return 0;
}