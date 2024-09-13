#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/520/A
Name: Pangram
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    for (int i = 0; i < n; i++) {
        st.insert(tolower(s[i]));
    };
    if (st.size() == 26) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}