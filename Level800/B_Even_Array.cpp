#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1367/B
Name: Even Array
TC: O(t * n)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        };
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        };
        if (odd != even) {
            cout << -1 << endl;
        } else {
            cout << even << endl;
        };
    }
    return 0;
}