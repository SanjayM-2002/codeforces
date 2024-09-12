#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/677/A
Name: Vanya and Fence
TC: O(n)
SC: O(1)
*/
int main () {
    int n, h;
    cin >> n >> h;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr <= h) res++;
        else res += 2;
    };
    cout<< res <<endl;
    return 0;
}