#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1791/A
Name: Codeforces Checking
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        char ch;
        cin >> ch;
        string s = "codeforces";
        if (s.find(ch) != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}