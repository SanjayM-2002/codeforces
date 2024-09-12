#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/467/A
Name: George and Accommodation
TC: O(n)
SC: O(1)
*/


int main () {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)res++;
    };
    cout<< res <<endl;
    return 0;
}