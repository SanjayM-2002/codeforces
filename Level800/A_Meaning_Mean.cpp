#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/2021/A
Name: Meaning Mean
TC: O(t * n * log(n))
SC: O(n)
*/
int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int res = a[0];
        for (int i = 1; i < n; ++i) {
            res = (res + a[i]) / 2;
        }
        cout << res << endl;
    }
    return 0;
}