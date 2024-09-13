#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/443/A
Name: Anton and Letters
TC: O(n)
SC: O(n)
*/
int main () {
    string s;
    getline(cin, s);
    unordered_set<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ') {
            st.insert(s[i]);
        }
    };
    int res = st.size();
    cout << res << endl;
    return 0;
}