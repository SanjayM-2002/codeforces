#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1367/A
Name: Short Substrings
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        string a = "";
        int len = b.length();
        if (len == 2) {
            a = b;
        } else {
            for (int i = 0; i < len; i++) {
                if (i % 2 == 0) {
                    a += b[i];
                }
            }
            a += b[len - 1];
        };
        cout << a << endl;
    }
    return 0;
}