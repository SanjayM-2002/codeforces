#include <bits/stdc++.h>
using namespace std;
/*
Link: https://codeforces.com/problemset/problem/1433/A
Name: Panoramix's Prediction
TC: O(t)
SC: O(1)
*/
int main()
{
    int t;
    cin >> t;
    int press = 0;
    unordered_map<int, int> mp;
    for (int i = 1; i <= 9; i++) {
        string s = to_string(i);
        for (int j = 0; j < 4; j++) {
            press += s.size();
            mp[stoi(s)] = press;
            s += to_string(i);
        }
    };
    while (t--) {
        int x;
        cin >> x;
        cout << mp[x] << endl;
    };
    return 0;
}