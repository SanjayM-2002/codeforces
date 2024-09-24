#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1343/B
Name: Balanced Array
TC: O(t*n)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool isPossible = false;
        if (n % 4 == 0) {
            isPossible = true;
        };
        if (isPossible) {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 1; i < n - 1; i += 2) {
                cout << i << " ";
            }
            cout << n + n / 2 - 1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}