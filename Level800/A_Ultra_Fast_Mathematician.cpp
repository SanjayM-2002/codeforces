#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/64/A
Name: Ultra-Fast Mathematician
TC: O(n)
SC: O(n)
*/
int main () {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    string res = "";
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) res += "1";
        else res += "0";
    };
    cout << res << endl;
    return 0;
}