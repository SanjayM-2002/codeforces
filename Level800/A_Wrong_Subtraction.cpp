#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/977/A
Name: Wrong Subtraction
TC: O(k)
SC: O(1)
*/
int main () {
    int n, k;
    cin >> n >> k;
    while (k) {
        if (n % 10 == 0) n /= 10;
        else n--;
        k--;
    };
    cout << n <<endl;
    return 0;
}