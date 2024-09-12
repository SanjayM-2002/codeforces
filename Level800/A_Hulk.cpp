#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/705/A
Name: Hulk
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    string res = "";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) res += "I hate that ";
        else res += "I love that ";
    };
    int len = res.length();
    res.erase(res.end() - 5, res.end());
    res += "it";
    cout << res <<endl;
    return 0;
}