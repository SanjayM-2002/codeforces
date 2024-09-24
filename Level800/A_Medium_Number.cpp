#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1760/A
Name: Medium Number
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        };
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    }
    return 0;
}