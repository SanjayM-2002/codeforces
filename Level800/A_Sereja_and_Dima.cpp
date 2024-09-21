#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/381/A
Name: Sereja and Dima
TC: O(n)
SC: O(n)
*/
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int ser = 0, dim = 0;
    int l = 0, r = n - 1;
    bool isSereja = true;
    while (l <= r) {
        if (v[l] > v[r]) {
            if (isSereja) ser += v[l];
            else dim += v[l];
            l++;
        } else {
            if (isSereja) ser += v[r];
            else dim += v[r];
            r--;
        }
        isSereja = !isSereja;
    };
    cout << ser << " " << dim << endl;
    return 0;
}