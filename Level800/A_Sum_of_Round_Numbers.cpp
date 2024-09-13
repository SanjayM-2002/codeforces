#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1352/A
Name: Sum of Round Numbers
TC: O(digits in n)
SC: O(digits in n)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int p = 1;
        while (n > 0) {
            int rem = n % 10;
            if (rem != 0) {
                v.push_back(rem * p);
            }
            n /= 10;
            p*=10;
        };
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        };
        cout<<endl;
    };
    return 0;
}