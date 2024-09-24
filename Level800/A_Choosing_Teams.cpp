#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/432/A
Name: Choosing Teams
TC: O(n)
SC: O(n)
*/
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] + k <= 5) count++;
    };
    cout << count / 3 << endl;
    return 0;
}