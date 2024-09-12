#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/282/A
Name: Bit++
TC: O(n)
SC: O(1)
*/
int main () {
    int res = 0;
    int n;
    cin >> n;
    while (n) {
        string str;
        cin >> str;
        if (str[1] == '+') res++;
        else res--;
        n--;
    };
    cout<<res;
    return 0;
}