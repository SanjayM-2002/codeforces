#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/236/A
Name: Boy or Girl
TC: O(n)
SC: O(n)
*/
int main () {
    string str;
    cin >> str;
    unordered_set<char> s;
    for (int i = 0; i < str.length(); i++) {
        s.insert(str[i]);
    };
    int count = s.size();
    if (count % 2 == 0) cout << "CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}