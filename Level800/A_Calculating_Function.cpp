#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/486/A
Name: Calculating Function
TC: O(1)
SC: O(1)
*/
int main () {
    long long n;
    cin >> n;
    long long res = 0;
    if (n == 1) res = -1;
    else if (n % 2 == 0) res = n/2;
    else res = (n-1)/2 + (-n);
    cout << res << endl;
    return 0;
}