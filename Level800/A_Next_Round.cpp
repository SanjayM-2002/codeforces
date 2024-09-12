#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/158/A
Name: Next Round
TC: O(n)
SC: O(1)
*/
int main () {
    int n, k;
    cin>>n>>k;
    vector<int> v(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    };
    int threshold = v[k-1];
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= threshold && v[i] > 0) res++;
        else break;
    };
    cout<<res<<endl;
    return 0;
}