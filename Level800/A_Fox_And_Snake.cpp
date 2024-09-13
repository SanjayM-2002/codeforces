#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/510/A
Name: Fox And Snake
TC: O(n*m)
SC: O(1)
*/
int main () {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= m; j++) {
                cout << "#";
            }
        } else {
            if (i % 4 == 0) {
                cout << "#";
                for (int j = 2; j <= m; j++) {
                    cout << ".";
                }
            } else {
                for (int j = 1; j < m; j++) {
                    cout << ".";
                }
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}