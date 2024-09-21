#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1676/A
Name: Lucky?
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sumFirst = 0, sumLast = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i <= 2) sumFirst += s[i] - '0';
            else sumLast += s[i] - '0';
        };
        if (sumFirst == sumLast) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}