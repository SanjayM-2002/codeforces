#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/228/A
Name: Is your horseshoe on the other hoof?
TC: O(1)
SC: O(1)
*/
int main () {
    int total = 4;
    unordered_set<int> s;
    for (int i = 0; i < total; i++){
        int a;
        cin >> a;
        s.insert(a);
    };
    int res = total - s.size();
    cout << res << endl;
    return 0;
}