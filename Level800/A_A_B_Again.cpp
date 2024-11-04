#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1999/A
Name: A+B Again?
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int d1 = n % 10;
        int d2 = n/10;
        cout << d1 + d2 << endl;
    }
    return 0;
}