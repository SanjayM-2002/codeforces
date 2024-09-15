#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1703/A
Name: YES or YES?
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool ans = false;
        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {
            ans = true;
        };
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    };
    return 0;
}