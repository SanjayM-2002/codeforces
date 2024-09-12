#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/200/B
Name: Drinks
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        sum += p;
    };
    double res = (double) sum/ (double) n;
    cout << fixed << setprecision(12) << res << endl;
    return 0;
}