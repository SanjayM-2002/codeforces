#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/469/A
Name: I Wanna Be the Guy
TC: O(p + q)
SC: O(p + q)
*/
int main () {
    int n;
    cin >> n;
    unordered_set<int> s;
    bool flag = true;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        s.insert(x);
    };
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        s.insert(x);
    };
    if (s.size() == n) cout << "I become the guy." <<endl;
    else cout << "Oh, my keyboard!" <<endl;
    return 0;
}