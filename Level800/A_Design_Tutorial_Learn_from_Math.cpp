#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/472/A
Name: Design Tutorial: Learn from Math
TC: O(1)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    if (n % 2 == 0) cout << "4 " << n - 4 << endl;
    else cout << "9 " << n - 9 << endl;
    return 0;
}