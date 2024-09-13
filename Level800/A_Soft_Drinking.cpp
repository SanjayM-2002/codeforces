#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/151/A
Name: Soft Drinking
TC: O(1)
SC: O(1)
*/
int main () {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int res = 0;
    int amount = k * l;
    int lime = c * d;
    int count = min({amount / nl, lime, p / np});
    res = count / n; // n friends
    cout << res << endl;
    return 0;
}