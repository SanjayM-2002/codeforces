#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/2024/A
Name: Profitable Imterest Rate
TC: 
SC: 
*/

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long a, b;
        cin >> a >> b; 

        if (a >= b) {
            cout << a << endl;
        } else {
            long long req = b - a; 
            if (req <= a) {
                long long res = a - req; 
                cout << res << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}