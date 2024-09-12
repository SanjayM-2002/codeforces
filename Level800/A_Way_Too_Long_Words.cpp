#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/71/A
Name: Way Too Long Words
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    };
    for (int i = 0; i < n; i++) {
        string w = words[i];
        int len = w.length();
        if (len > 10) {
            string res = w[0] + to_string(len - 2) + w[len-1];
            cout<<res<<endl;
        } else cout << w << endl;
    };

    return 0;
}