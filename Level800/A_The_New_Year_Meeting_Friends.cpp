#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/723/A
Name: The New Year: Meeting Friends
TC: O(1)
SC: O(1)
*/
int main () {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    };
    sort(v.begin(), v.end());
    int res = v[2] - v[0]; // (high - mid) + (mid - low) = high - low
    cout << res << endl;
    return 0;
}