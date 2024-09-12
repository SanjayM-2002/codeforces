#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1030/A
Name: In Search of an Easy Problem
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    bool flag = true; // isEasy
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            flag = false;
            break;
        };
    };
    if (flag) cout << "EASY" <<endl;
    else cout << "HARD" <<endl;
    return 0;
}