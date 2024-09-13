#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/144/A
Name: Arrival of the General
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    };
    int res = 0;
    int minVal = v[0], maxVal = v[0], minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
            maxIdx = i;
        };
        if (v[i] <= minVal) {
            minVal = v[i];
            minIdx = i;
        };
    };
    res = (maxIdx - 0) + (n-1 - minIdx);
    if (maxIdx > minIdx) res--; // to handle the case where maxIdx is greater than minIdx so one swap happens initially
    cout<<res<<endl;
    return 0;
}