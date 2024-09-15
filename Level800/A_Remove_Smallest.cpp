#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1399/A
Name: Remove Smallest
TC: O(t * n * log(n))
SC: O(n)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // if (n == 1) {
        //     cout << "YES" << endl;
        //     continue;
        // };
        vector<int> a(n, -1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        };
        sort(a.begin(), a.end());
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                flag = false;
                break;
            };
        };
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}