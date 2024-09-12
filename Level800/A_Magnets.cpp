#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/344/A
Name: Magnets
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    string prev = "";
    int res = 1;
    for (int i = 0; i < n; i++) {
        if (prev == "") {
            cin >> prev;
            continue;
        };
        string curr;
        cin >> curr;
        if (curr != prev) {
            res++;
            prev = curr;
        };
    };
    cout << res<< endl;
    return 0;
}