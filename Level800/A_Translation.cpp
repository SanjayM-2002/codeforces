#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/41/A
Name: Translation
TC: O(n)
SC: O(1)
*/
int main () {
    string s, t;
    cin >> s;
    cin >> t;
    bool ans = true;;
    if (s.length() != t.length()) ans = false;
    else {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] != t[n-1-i]) {
                ans = false;
                break;
            } else continue;
        };
    };
    if (ans) cout<< "YES"<<endl;
    else cout << "NO"<<endl;
    return 0;
}