#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/112/A
Name: Petya and Strings
TC: O(n)
SC: O(1)
*/
int main () {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (tolower(s1[i]) < tolower(s2[i])) {
            res = -1;
            break;
        } else if (tolower(s1[i]) > tolower(s2[i])) {
            res = 1;
            break;
        } else continue;
    };
    cout<<res<<endl;

    return 0;
}