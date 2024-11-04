#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1520/A
Name: Do Not Be Distracted!
TC: O(t*n)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin >> n;
        cin >> str;
        vector<int> arr(26, 0);
        bool isDistracted = false;
        for (int i = 0; i < n; i++) {
            int idx = str[i] - 'A';
            if (arr[idx] == 0) {
                arr[idx]++;
            } else {
                if (str[i] != str[i-1]) {
                    isDistracted = true;
                    break;
                }
            }
        };
        if (isDistracted) {
            cout << "NO" << endl;
        } else cout << "YES" << endl;
    }
    return 0;
}