#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/96/A
Name: Football
TC: O(n)
SC: O(1)
*/
int main () {
    string str;
    cin >> str;
    string zero = "0000000", one = "1111111";
    if (str.find(zero) != string::npos || str.find(one) != string::npos) cout <<"YES";
    else cout<<"NO";
    return 0;
}