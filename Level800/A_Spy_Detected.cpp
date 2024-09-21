#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1512/A
Name: Spy Detected!
TC: O(n)
SC: O(n)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int first = v[0], second = v[1], third = v[2];
        int res = -1;
        if (first == second) {
            for (int i = 2; i < n; i++) {
                if (v[i] != first) {
                    res = i + 1;
                    break;
                }
            }
        } else if (first == third) {
            res = 2;
        } else {
            res = 1;
        };
        cout << res << endl;
    }
    return 0;
}