#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/136/A
Name: Presents
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        v[val - 1] = i;
    };
    for (int i = 0; i < n; i++) {
        cout << v[i]<< " ";
    };
    return 0;
}