#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/427/A
Name: Police Recruits
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    int police = 0;
    int untreated = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            if (police == 0) {
                untreated++;
            } else {
                police--;
            }
        } else {
            police += x;
        }
    };
    cout << untreated << endl;
    return 0;
}