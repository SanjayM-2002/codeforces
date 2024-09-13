#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/750/A
Name: New Year and Hurry
TC: O(n)
SC: O(1)
*/
int main () {
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        time -= 5*i;
        if (time >= 0) {
            res++;
        } else {
            break;
        }
    };
    cout << res << endl;
    return 0;
}