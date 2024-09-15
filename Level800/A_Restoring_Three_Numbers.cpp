#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1154/A
Name: Restoring Three Numbers
TC: O(1)
SC: O(1)
*/
int main () {
    vector<int> v(4, -1);
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    };
    sort(v.begin(), v.end());
    // since a, b, c are +ve integers, a+b+c will be largest, i.e. v[3]
    int a, b, c;
    // assume a+b is v[0], b+c is v[1], a+c is v[2]
    a = v[3] - v[1]; 
    b = v[3] - v[2];
    c = v[3] - v[0];
    cout << a << " " << b << " " << c << endl;
    return 0;
}