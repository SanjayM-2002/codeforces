#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/266/A
Name: Stones on the Table
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    string str;
    cin >> n;
    cin >> str;
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i-1]) res++;
    };
    cout<<res<<endl;
    return 0;
}