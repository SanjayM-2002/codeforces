#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/155/A
Name: I_love_%username%
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    int low = 0, high = 0;
    int res = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0) {
            low = x;
            high = x;
        } else {
            if (x < low) {
                low = x;
                res++;
            } else if (x > high) {
                high = x;
                res++;
            } else continue;
        }
    }
    cout << res << endl;
    return 0;
}