#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1742/A
Name: Sum
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c) {
            cout <<"YES" << endl;
        } else if (a + c == b) {
            cout <<"YES" << endl;
        } else if (b + c == a) {
            cout <<"YES" << endl;
        } else {
            cout <<"NO" << endl;
        }
    };
    return 0;
}