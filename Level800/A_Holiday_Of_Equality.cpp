#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/758/A
Name: Holiday Of Equality
TC: O(n)
SC: O(n)
*/
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    int highest = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        highest = max(highest, v[i]);
    };
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += highest - v[i];
    };
    cout << res << endl;
    return 0;
}