#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/703/A
Name: Mishka and Game
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    string res = "Friendship is magic!^^";
    int mishka = 0, chris = 0;
    while (n--) {
        int m, c;
        cin >> m >> c;
        if (m > c) {
            mishka++;
        } else if (m < c) {
            chris++;
        };
    };
    if (mishka > chris) {
        res = "Mishka";
    } else if (mishka < chris) {
        res = "Chris";
    };
    cout << res << endl;
    return 0;
}