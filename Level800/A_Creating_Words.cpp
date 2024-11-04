#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1985/A
Name: Creating Words
TC: O(t)
SC: O(t)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        char a0 = a[0], b0 = b[0];
        swap(a[0], b0);
        swap(b[0], a0);
        cout << a << " " << b << endl;
    }
    return 0;
}