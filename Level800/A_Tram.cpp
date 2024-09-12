#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/116/A
Name: Tram
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    int res = 0;
    cin >> n;
    vector<int> a(n, -1), b(n, -1), curr(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (i == 0) curr[i] = b[i];
        else curr[i] = curr[i-1] + b[i] - a[i];
        res = max(res, curr[i]);
    };
    cout<<res<<endl;
    return 0;
}