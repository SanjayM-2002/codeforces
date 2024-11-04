#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1619/A
Name: Square String?
TC: O(t*n)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        if (len % 2 != 0) {
            cout << "NO" << endl;
            continue;
        } else {
            string s1 = s.substr(0, len/2);
            string s2 = s.substr(len/2, len/2);
            if (s1 == s2) {
                cout << "YES" << endl;
            } else cout << "NO" << endl;
        };
    }
    return 0;
}