#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/546/A
Name: Soldier and Bananas
TC: O(1)
SC: O(1)
*/
int main () {
    int k, n, w;
    cin >> k >> n >> w;
    int amount = k * w * (w+1) / 2;
    int res = (amount - n) > 0 ? (amount - n) : 0;
    cout<< res <<endl;
    return 0;
}