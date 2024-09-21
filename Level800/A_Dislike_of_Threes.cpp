#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1560/A
Name: Dislike of Threes
TC: O(t*K)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0;
        for (int i = 1; i < 10000; i++) {
            if (i % 3 == 0 || i % 10 == 3) continue;
            count++;
            if (count == k) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}