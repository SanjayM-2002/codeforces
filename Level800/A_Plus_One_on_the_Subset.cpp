#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1624/A
Name: Plus One on the Subset
TC: O(t*n)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            int x;
            cin >> x;
            cout << 0 << endl;
            continue;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        };
        int maxVal = arr[0], minVal = arr[0];
        for (int i = 1; i < n; i++) {
            maxVal = max(maxVal, arr[i]);
            minVal = min(minVal, arr[i]);
        };
        cout << maxVal - minVal << endl;
    }
    return 0;
}