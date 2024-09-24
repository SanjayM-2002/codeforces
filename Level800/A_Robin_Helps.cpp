#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/2014/A
Name: Robin Helps
TC: O(t*n)
SC: O(n)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int gold = 0;
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                gold += a[i];
            } else if (a[i] == 0 && gold > 0) {
                res++;
                gold--;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}