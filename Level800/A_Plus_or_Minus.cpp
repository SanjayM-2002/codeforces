#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1807/A
Name: Plus or Minus
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b == c) cout << "+" << endl;
        else if(a-b == c) cout << "-" << endl;
    }
    return 0;
}