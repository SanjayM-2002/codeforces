#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/141/A
Name: Amusing Joke
TC: O(n)
SC: O(1)
*/

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++) {
        v[s[i] - 'A']++;
        v[t[i] - 'A']--;
    };
    for (int i = 0; i < 26; i++) {
        if (v[i] != 0) {
            return false;
        }
    };
    return true;
}

int main () {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1.size() + s2.size() != s3.size()) {
        cout << "NO" << endl;
        return 0;
    } else {
        bool res = isAnagram(s1 + s2, s3);
        if (res) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}