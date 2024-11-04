#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/2030/A
Name: A Gift From Orangutan
TC: O(nlogn)
SC: O(n)
*/
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int score = (a[n-1] - a[0]) * (n - 1);
        cout << score << endl;
    }
    return 0;
}