#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/268/A
Name: Games
TC: O(n)
SC: O(n)
*/
int main () {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    unordered_map<int, int> guestColorCount;
    for (int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        v[i] = {h, a};
        guestColorCount[a]++;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (guestColorCount.find(v[i].first) != guestColorCount.end()) {
            res += guestColorCount[v[i].first];
        }
    }
    cout << res << endl;
    return 0;
}