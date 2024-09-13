#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/732/A
Name: Buy a Shovel
TC: O(1)
SC: O(1)
*/
int main () {
    long long k, r;
    cin >> k >> r;
    int res = 1;
    int cost = k;
    while (cost % 10 != 0 && cost % 10 != r) {
        cost += k;
        res++;
    };
    cout << res << endl;
    return 0;
}