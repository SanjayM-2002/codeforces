#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/266/B
Name: Queue at the School
TC: O(t*n)
SC: O(1)
*/
int main () {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t) {
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            };
        };
        t--;
    };
    cout << s <<endl;

    return 0;
}