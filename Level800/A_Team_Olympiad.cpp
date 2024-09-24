#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/490/A
Name: Team Olympiad
TC: O(n)
SC: O(n)
*/
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> c1, c2, c3;
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) c1.push_back(i + 1);
        else if (v[i] == 2) c2.push_back(i + 1);
        else if (v[i] == 3) c3.push_back(i + 1);
    };
    int w = min({c1.size(), c2.size(), c3.size()});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << c1[i] << " " << c2[i] << " " << c3[i] << endl;
    }
    return 0;
}